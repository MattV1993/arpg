// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/CombatStateAttack.h"
#include "../Public/CombatStateIdle.h"
#include "../Public/CombatStateStun.h"
#include "../Public/CombatStateDeath.h"
#include "../Public/CombatSystemContext.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UCombatStateAttack::Init(TScriptInterface<IAttackHolder> AttackHolder)
{
	this->CurrentAttackHolder = AttackHolder;
}

void UCombatStateAttack::Action(UCombatSystemContext* Context)
{
	Super::Action(Context);

	CurrentAttackHolder->UseAttack();

	FTimerDelegate AttackFinishedDel;
	AttackFinishedDel.BindUFunction(this, FName("AttackFinished"), Context);

	GetWorld()->GetTimerManager().SetTimer(
		AttackFinishedTimer,
		AttackFinishedDel,
		CurrentAttackHolder->GetAttack()->GetSpeed(),
		false);
}

bool UCombatStateAttack::TryTranitionTo(UClass* Type, UCombatSystemContext* Context)
{
	if (Type == StaticClass())
	{
		return TryTransitionNewAttack(Type, Context);
	}
	else if (Type == UCombatStateStun::StaticClass() ||
		Type == UCombatStateDeath::StaticClass())
	{
		CurrentAttackHolder->GetAttack()->Reset(Context->GetCharacter()->GetMesh());
		GetWorld()->GetTimerManager().ClearTimer(AttackFinishedTimer);

		return UCombatState::TryTranitionTo(Type, Context);
	}
	else
	{
		return TryTransitionStopAttack(Type, Context);
	}

	return false;
}

void UCombatStateAttack::Tick(float DeltaSeconds, UCombatSystemContext* Context)
{
	
}

FString UCombatStateAttack::GetName() const
{
	return FString{ TEXT("Attack") };
}

void UCombatStateAttack::AttackFinished(UCombatSystemContext* Context)
{
	CurrentAttackHolder->GetAttack()->Reset(Context->GetCharacter()->GetMesh());

	auto Creator = Context->GetRegistry().Find(UCombatStateIdle::StaticClass());
	Context->SetState(Creator->Create());
}

bool UCombatStateAttack::TryTransitionNewAttack(UClass* Type, UCombatSystemContext* Context)
{
	FTimespan Diff = FDateTime::UtcNow() - GetStartTime();
	float DiffMilliseconds = Diff.GetTotalMilliseconds();

	float AttackSpeedMS = CurrentAttackHolder->GetAttack()->GetSpeed() * 1000.f;
	float AttackRemainingStartAllowance = AttackSpeedMS - (AttackSpeedMS * 0.4);
	float AttackRemainingStopAllowance = AttackSpeedMS;

	if (CurrentAttackHolder->GetAttack()->CanCombo() &&
		DiffMilliseconds > AttackRemainingStartAllowance &&
		DiffMilliseconds < AttackRemainingStopAllowance)
	{
		GetWorld()->GetTimerManager().ClearTimer(AttackFinishedTimer);
		Action(Context);
	}

	return false;
}

bool UCombatStateAttack::TryTransitionStopAttack(UClass* Type, UCombatSystemContext* Context)
{
	FTimespan Diff = FDateTime::UtcNow() - GetStartTime();
	float DiffMilliseconds = Diff.GetTotalMilliseconds();

	float AttackSpeedMS = CurrentAttackHolder->GetAttack()->GetSpeed() * 1000.f;
	float AttackRemainingStopAllowance = AttackSpeedMS * 0.2;

	if (DiffMilliseconds < AttackRemainingStopAllowance &&
		CurrentAttackHolder->GetAttack()->GetCombo() <= 1)
	{
		CurrentAttackHolder->GetAttack()->Reset(Context->GetCharacter()->GetMesh());
		GetWorld()->GetTimerManager().ClearTimer(AttackFinishedTimer);

		return UCombatState::TryTranitionTo(Type, Context);
	}

	return false;
}
