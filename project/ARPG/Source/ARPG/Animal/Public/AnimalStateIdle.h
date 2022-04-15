// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimalStateIdle.generated.h"

/**
 * 
 */
UCLASS()
class ARPG_API UAnimalStateIdle : public UAnimalState
{
	GENERATED_BODY()

public:

	FString GetName() const override;
	
};
