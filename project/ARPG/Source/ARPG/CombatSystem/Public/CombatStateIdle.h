// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "CombatState.h"

#include "CombatStateIdle.generated.h"

/**
 * 
 */
UCLASS()
class ARPG_API UCombatStateIdle : public UCombatState
{
	GENERATED_BODY()

public:

	void Action(UCombatSystemContext* Context) override;

	FString GetName() const override;
	
};
