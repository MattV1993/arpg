// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatState.h"
#include "CombatStateDeath.generated.h"

UCLASS()
class ARPG_API UCombatStateDeath : public UCombatState
{
	GENERATED_BODY()

public:

	void Init();

	void Action(UCombatSystemContext* Context) override;

	bool TryTranitionTo(UClass* Type, UCombatSystemContext* Context) override;

	FString GetName() const override;

private:
	
};
