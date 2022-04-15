// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimalStateRun.generated.h"

class UAnimalStateContext;

UCLASS()
class ARPG_API UAnimalStateRun : public UAnimalState
{
	GENERATED_BODY()

public:

	void Action(UAnimalStateContext* Context) override;

	FString GetName() const override;
	
};
