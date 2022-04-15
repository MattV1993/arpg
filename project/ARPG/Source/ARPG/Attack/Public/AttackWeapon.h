#pragma once

#include "CoreMinimal.h"
#include "Attack.h"

#include "../../DamageHandler.h"

#include "AttackWeapon.generated.h"

class AWeapon;

UCLASS(Blueprintable)
class ARPG_API UAttackWeapon : public UAttack
{
	GENERATED_BODY()

public:

	static UAttackWeapon* Create(UObject* Outer, AWeapon* Weapon, float ExtraDamage, float ExtraSpeed);

	void Use(USkeletalMeshComponent* Owner) override;

	void Reset(USkeletalMeshComponent* Owner) override;

	float GetSpeed() const override;

	void AnimNotify() override;

protected:

	virtual void Init(AWeapon* Weapon, float ExtraDamage, float ExtraSpeed);

	void BeginPlay() override;

	AWeapon* CurrentWeapon;

	float AttackExtraDamage;
	float AttackExtraSpeed;

	UPROPERTY()
	TArray<UAnimMontage*> WeaponAnims;
	
};
