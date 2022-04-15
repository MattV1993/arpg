// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "Attack/Public/AttackHolder.h"
#include "Weapon.h"

#include "Loadout.generated.h"

class AItem;
class AArmour;
class AShield;
class UAttack;

UCLASS()
class ARPG_API ULoadout : public UObject, public IAttackHolder
{
	GENERATED_BODY()

public:

	static ULoadout* Create(UObject* Outer, USkeletalMeshComponent* Owner);

	void Equip(AItem* Item);

	void SwapWeapons();

	void UseAttack() override;
	void UseHeavyAttack() override;

	UAttack* GetAttack() override;
	UAttack* GetHeavyAttack() override;

	FWeaponSpec GetOutWeaponSpec() const;
	FDamageSpec ResolveIncomingDamageSpec(FDamageSpec Spec) const;

	void ToggleCasting();

	UPROPERTY()
	AWeapon* Weapon;

	UPROPERTY()
	AWeapon* SecondaryWeapon;

	UPROPERTY()
	AShield* Shield;

	UPROPERTY()
	AArmour* HeadArmour;

	UPROPERTY()
	AArmour* ChestArmour;

	UPROPERTY()
	AArmour* LegArmour;

	UPROPERTY()
	AArmour* GloveArmour;

	UPROPERTY()
	AArmour* BootArmour;

	void PostInitProperties() override;

	UAttack* GetLastAttack();

protected:

	void BeginPlay();

	UAttack* LastAttack;

	UPROPERTY()
	USkeletalMeshComponent* Owner;

private:

	void EquipWeapon(AWeapon* NewWeapon);

	bool IsCasting;
};
