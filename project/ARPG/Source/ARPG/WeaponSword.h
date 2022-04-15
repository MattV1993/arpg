// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "WeaponSword.generated.h"

/**
 * 
 */
UCLASS()
class ARPG_API AWeaponSword : public AWeapon
{
	GENERATED_BODY()


public:

	AWeaponSword();

protected:

	void BeginPlay() override;
	
};
