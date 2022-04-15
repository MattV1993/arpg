#include "../Public/CombatStateDodge.h"
#include "../Public/CombatStateIdle.h"
#include "../Public/CombatStateDeath.h"
#include "../Public/CombatSystemContext.h"

#include "GameFramework/Character.h"

#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

void UCombatStateDodge::Action(UCombatSystemContext* Context)
{
	Super::Action(Context);

	Ending = false;
	CurrentInput = 1;

	Direction = Context->GetCharacter()->GetVelocity();
	Direction.Normalize();

	FTimerDelegate DodgeFinishedDel;
	DodgeFinishedDel.BindUFunction(this, FName("DodgeFinished"), Context);

	GetWorld()->GetTimerManager().SetTimer(
		DodgeFinishedTimer,
		DodgeFinishedDel,
		0.5,
		false);
}

bool UCombatStateDodge::TryTranitionTo(UClass* Type, UCombatSystemContext* Context)
{
	if (Type == UCombatStateDeath::StaticClass())
	{
		GetWorld()->GetTimerManager().ClearTimer(DodgeFinishedTimer);
		GetWorld()->GetTimerManager().ClearTimer(EndDelayTimer);
		Context->GetCharacter()->EnableInput(UGameplayStatics::GetPlayerController(Context->GetCharacter(), 0));

		Context->GetCharacter()->GetController()->SetIgnoreMoveInput(false);

		return UCombatState::TryTranitionTo(Type, Context);
	}
	
	return false;
}

bool UCombatStateDodge::CanTransition(UCombatSystemContext* Context) const
{
	return Context->GetCharacter()->GetVelocity().Size() > 0;
}

void UCombatStateDodge::Tick(float DeltaSeconds, UCombatSystemContext* Context)
{
	Super::Tick(DeltaSeconds, Context);

	if (!Ending)
	{
		Context->GetCharacter()->AddMovementInput(Direction, CurrentInput);
	}
}

FString UCombatStateDodge::GetName() const
{
	return FString{ TEXT("Dodge") };
}

void UCombatStateDodge::DodgeFinished(UCombatSystemContext* Context)
{
	Ending = true;

	Context->GetCharacter()->GetController()->SetIgnoreMoveInput(true);

	FTimerDelegate EndDelayDel;
	EndDelayDel.BindUFunction(this, FName("EndDelayFinished"), Context);

	GetWorld()->GetTimerManager().SetTimer(
		EndDelayTimer,
		EndDelayDel,
		0.4,
		false);
}

void UCombatStateDodge::EndDelayFinished(UCombatSystemContext* Context)
{
	Context->GetCharacter()->GetController()->SetIgnoreMoveInput(false);

	auto Creator = Context->GetRegistry().Find(UCombatStateIdle::StaticClass());
	Context->SetState(Creator->Create());
}
