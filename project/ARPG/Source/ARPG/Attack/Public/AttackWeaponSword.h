#pragma once

#include "CoreMinimal.h"
#include "AttackWeapon.h"
#include "AttackWeaponSword.generated.h"

UCLASS()
class ARPG_API UAttackWeaponSword : public UAttackWeapon
{
	GENERATED_BODY()

public:

	static UAttackWeaponSword* Create(UObject* Outer, AWeapon* Weapon);

protected:

	void BeginPlay() override;
	
};
