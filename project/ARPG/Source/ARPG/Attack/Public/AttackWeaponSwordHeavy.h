// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Public/AttackWeapon.h"
#include "AttackWeaponSwordHeavy.generated.h"

/**
 * 
 */
UCLASS()
class ARPG_API UAttackWeaponSwordHeavy : public UAttackWeapon
{
	GENERATED_BODY()

public:

	static UAttackWeaponSwordHeavy* Create(UObject* Outer, AWeapon* Weapon);

protected:

	void BeginPlay() override;
	
};
