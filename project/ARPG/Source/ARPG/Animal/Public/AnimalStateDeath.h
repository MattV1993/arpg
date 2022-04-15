// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimalState.h"
#include "AnimalStateDeath.generated.h"

/**
 * 
 */
UCLASS()
class ARPG_API UAnimalStateDeath : public UAnimalState
{
	GENERATED_BODY()

public:

	void Action(UAnimalStateContext* Context) override;

	bool TryTranitionTo(UClass* Type, UAnimalStateContext* Context) override;

	FString GetName() const override;
	
};
