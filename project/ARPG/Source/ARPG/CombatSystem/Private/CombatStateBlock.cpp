// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/CombatStateBlock.h"
#include "../Public/CombatStateIdle.h"
#include "../Public/CombatStateStun.h"
#include "../Public/CombatStateDeath.h"
#include "../Public/CombatSystemContext.h"

#include "../../Loadout.h"
#include "../../Shield.h"

#include "GameFramework/Character.h"

#include "GameFramework/CharacterMovementComponent.h"

void UCombatStateBlock::Init(ULoadout* Loadout)
{
	OwnerLoadout = Loadout;
}

void UCombatStateBlock::Action(UCombatSystemContext* Context)
{
	Super::Action(Context);

	if (OwnerLoadout->Shield == nullptr)
	{
		return;
	}

	BlockHit = false;

	UCharacterMovementComponent* MovementPtr = Cast<UCharacterMovementComponent>(Context->GetCharacter()->GetCharacterMovement());
	MovementPtr->MaxWalkSpeed = 300;
}

bool UCombatStateBlock::TryTranitionTo(UClass* Type, UCombatSystemContext* Context)
{
	if ((!(Type == UCombatStateStun::StaticClass() || Type == UCombatStateDeath::StaticClass())) && BlockHit)
	{
		return false;
	}

	if (OwnerLoadout->Shield->BlockHitMontage)
	{
		Context->GetCharacter()->GetMesh()->GetAnimInstance()->Montage_Stop(
			OwnerLoadout->Shield->BlockHitMontage->BlendOut.GetBlendTime(),
			OwnerLoadout->Shield->BlockHitMontage);
	}

	GetWorld()->GetTimerManager().ClearTimer(BlockHitFinishedTimer);

	UCharacterMovementComponent* MovementPtr = Cast<UCharacterMovementComponent>(Context->GetCharacter()->GetCharacterMovement());
	MovementPtr->MaxWalkSpeed = 600;

	return UCombatState::TryTranitionTo(Type, Context);
}

bool UCombatStateBlock::CanTransition(UCombatSystemContext* Context) const
{
	return OwnerLoadout->Shield != nullptr;

}

void UCombatStateBlock::ApplyHit(const FHitSpec& Params, UCombatSystemContext* Context)
{
	if (OwnerLoadout->Shield == nullptr || OwnerLoadout->Shield->BlockHitMontage == nullptr)
	{
		return;
	}

	BlockHit = true;

	Context->GetCharacter()->GetMesh()->GetAnimInstance()->Montage_Play(OwnerLoadout->Shield->BlockHitMontage);

	FTimerDelegate BlockHitFinishedDel;
	BlockHitFinishedDel.BindUFunction(this, FName("BlockHitFinished"), Context);

	GetWorld()->GetTimerManager().SetTimer(
		BlockHitFinishedTimer,
		BlockHitFinishedDel,
		0.3f,
		false);
}

FString UCombatStateBlock::GetName() const
{
	return FString{ TEXT("Block") };
}

void UCombatStateBlock::BlockHitFinished(UCombatSystemContext* Context)
{
	BlockHit = false;
	Context->GetCharacter()->GetMesh()->GetAnimInstance()->Montage_Stop(
		OwnerLoadout->Shield->BlockHitMontage->BlendOut.GetBlendTime(),
		OwnerLoadout->Shield->BlockHitMontage);
}
