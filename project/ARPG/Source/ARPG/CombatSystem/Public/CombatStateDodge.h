// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatState.h"
#include "CombatStateDodge.generated.h"

/**
 * 
 */
UCLASS()
class ARPG_API UCombatStateDodge : public UCombatState
{
	GENERATED_BODY()

public:

	void Action(UCombatSystemContext* Context) override;

	bool TryTranitionTo(UClass* Type, UCombatSystemContext* Context) override;
	bool CanTransition(UCombatSystemContext* Context) const override;

	void Tick(float DeltaSeconds, UCombatSystemContext* Context) override;

	FString GetName() const override;

protected:

	UFUNCTION()
	void DodgeFinished(UCombatSystemContext* Context);

	UFUNCTION()
	void EndDelayFinished(UCombatSystemContext* Context);

private:

	FTimerHandle DodgeFinishedTimer;
	FTimerHandle EndDelayTimer;

	bool Ending;

	FVector Direction;
	int CurrentInput;
	
};
