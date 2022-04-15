// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatState.h"

#include "CombatStateBlock.generated.h"

class UCombatSystemContext;
class ULoadout;
class ACharacter;

UCLASS()
class ARPG_API UCombatStateBlock : public UCombatState
{
	GENERATED_BODY()

public:

	void Init(ULoadout* Loadout);

	void Action(UCombatSystemContext* Context) override;

	bool TryTranitionTo(UClass* Type, UCombatSystemContext* Context) override;
	bool CanTransition(UCombatSystemContext* Context) const override;

	void ApplyHit(const FHitSpec& Params, UCombatSystemContext* Context) override;

	FString GetName() const override;

protected:

	UFUNCTION()
	void BlockHitFinished(UCombatSystemContext* Context);

private:

	ULoadout* OwnerLoadout;

	FTimerHandle BlockHitFinishedTimer;

	bool BlockHit;
	
};
