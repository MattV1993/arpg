// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttackWeapon.h"
#include "AttackWeaponBow.generated.h"

UCLASS()
class ARPG_API UAttackWeaponBow : public UAttackWeapon
{
	GENERATED_BODY()
	
public:

	static UAttackWeaponBow* Create(UObject* Outer, AWeapon* Weapon);

protected:

	void BeginPlay() override;
};
