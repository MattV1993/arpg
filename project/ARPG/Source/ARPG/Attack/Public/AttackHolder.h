// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "Attack.h"

#include "AttackHolder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UAttackHolder : public UInterface
{
	GENERATED_BODY()
};

class ARPG_API IAttackHolder
{
	GENERATED_BODY()

public:

	virtual void UseAttack() = 0;
	virtual void UseHeavyAttack() = 0;

	virtual UAttack* GetAttack() = 0;
	virtual UAttack* GetHeavyAttack() = 0;
};
