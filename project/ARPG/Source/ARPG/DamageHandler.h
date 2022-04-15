// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "Weapon.h"
#include "DamageReceiver.h"

#include "DamageHandler.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UDamageHandler : public UInterface
{
	GENERATED_BODY()
};

class ARPG_API IDamageHandler
{
	GENERATED_BODY()

public:

	virtual FWeaponSpec GetOutWeaponSpec() const = 0;
	virtual FDamageSpec ResolveIncomingDamageSpec(FDamageSpec Spec) const = 0;
};
