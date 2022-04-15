#pragma once

#include "CoreMinimal.h"
#include "Equipment.h"
#include "DamageReceiver.h"

#include "Weapon.generated.h"

class UAnimMontage;
class UAttack;

USTRUCT(Blueprintable)
struct FWeaponSpec
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	FDamageSpec Damage;

	UPROPERTY(EditDefaultsOnly)
	float AttackSpeed;
};

UCLASS()
class ARPG_API AWeapon : public AEquipment
{
	GENERATED_BODY()

public:

	FWeaponSpec GetSpec() const;

	UAttack* GetStandardAttack();
	UAttack* GetHeavyAttack();

	virtual FString SocketName() const;

	virtual bool TwoHanded() const;

protected:

	void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
		FWeaponSpec Spec;

	UPROPERTY(EditDefaultsOnly)
		UAttack* StandardAttack;

	UPROPERTY(EditDefaultsOnly)
		UAttack* HeavyAttack;

private:

};
