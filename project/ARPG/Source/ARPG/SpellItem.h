// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpellItem.generated.h"

class UAttack;

UCLASS()
class ARPG_API USpellItem : public UObject
{
	GENERATED_BODY()
	
public:

	UAttack* GetAttack();

private:

	UPROPERTY(EditDefaultsOnly)
		UAttack* Attack;
};
