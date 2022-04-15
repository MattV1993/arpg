#include "../Public/AttackWeaponBow.h"

UAttackWeaponBow* UAttackWeaponBow::Create(UObject* Outer, AWeapon* Weapon)
{
	UAttackWeaponBow* AttackWeaponBow = NewObject<UAttackWeaponBow>(Outer);
	AttackWeaponBow->Init(Weapon, 0.f, 0.f);

	return AttackWeaponBow;
}

void UAttackWeaponBow::BeginPlay()
{
	Anims.Add(LoadObject<UAnimMontage>(NULL, TEXT("AnimMontage'/Game/Animations/Bow/AttackBowMontage.AttackBowMontage'")));
	WeaponAnims.Add(LoadObject<UAnimMontage>(NULL, TEXT("AnimMontage'/Game/Arrows/BowAndArrow/BowAndArrow1/Bow1Montage.Bow1Montage'")));
}
