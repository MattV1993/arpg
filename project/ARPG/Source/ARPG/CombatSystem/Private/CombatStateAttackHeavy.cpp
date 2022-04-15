#include "../Public/CombatStateAttackHeavy.h"
#include "../Public/CombatStateIdle.h"
#include "../Public/CombatStateStun.h"
#include "../Public/CombatStateDeath.h"
#include "../Public/CombatSystemContext.h"

#include "GameFramework/Character.h"

void UCombatStateAttackHeavy::Init(TScriptInterface<IAttackHolder> AttackHolder)
{
	this->CurrentAttackHolder = AttackHolder;
}

void UCombatStateAttackHeavy::Action(UCombatSystemContext* Context)
{
	Super::Action(Context);

	CurrentAttackHolder->UseHeavyAttack();

	FTimerDelegate AttackFinishedDel;
	AttackFinishedDel.BindUFunction(this, FName("AttackFinished"), Context);

	GetWorld()->GetTimerManager().SetTimer(
		AttackFinishedTimer,
		AttackFinishedDel,
		CurrentAttackHolder->GetHeavyAttack()->GetSpeed(),
		false);
}

bool UCombatStateAttackHeavy::TryTranitionTo(UClass* Type, UCombatSystemContext* Context)
{
	if (Type == UCombatStateStun::StaticClass() ||
		Type == UCombatStateDeath::StaticClass())
	{
		CurrentAttackHolder->GetHeavyAttack()->Reset(Context->GetCharacter()->GetMesh());
		GetWorld()->GetTimerManager().ClearTimer(AttackFinishedTimer);

		return UCombatState::TryTranitionTo(Type, Context);
	}
	else
	{
		return false;
	}

	return false;
}

bool UCombatStateAttackHeavy::CanTransition(UCombatSystemContext* Context) const
{
	return CurrentAttackHolder->GetHeavyAttack() != nullptr;
}

FString UCombatStateAttackHeavy::GetName() const
{
	return FString{ TEXT("HeavyAttack") };
}

void UCombatStateAttackHeavy::AttackFinished(UCombatSystemContext* Context)
{
	CurrentAttackHolder->GetHeavyAttack()->Reset(Context->GetCharacter()->GetMesh());

	auto Creator = Context->GetRegistry().Find(UCombatStateIdle::StaticClass());
	Context->SetState(Creator->Create());
}

bool UCombatStateAttackHeavy::TryTransitionStopAttack(UClass* Type, UCombatSystemContext* Context)
{
	FTimespan Diff = FDateTime::UtcNow() - GetStartTime();
	float DiffMilliseconds = Diff.GetTotalMilliseconds();

	float AttackSpeedMS = CurrentAttackHolder->GetHeavyAttack()->GetSpeed() * 1000.f;
	float AttackRemainingStopAllowance = AttackSpeedMS * 0.2;

	if (DiffMilliseconds < AttackRemainingStopAllowance &&
		CurrentAttackHolder->GetHeavyAttack()->GetCombo() <= 1)
	{
		CurrentAttackHolder->GetHeavyAttack()->Reset(Context->GetCharacter()->GetMesh());
		GetWorld()->GetTimerManager().ClearTimer(AttackFinishedTimer);

		return UCombatState::TryTranitionTo(Type, Context);
	}

	return false;
}