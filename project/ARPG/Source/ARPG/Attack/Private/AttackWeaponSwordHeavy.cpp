#include "../Public/AttackWeaponSwordHeavy.h"

UAttackWeaponSwordHeavy* UAttackWeaponSwordHeavy::Create(UObject* Outer, AWeapon* Weapon)
{
	UAttackWeaponSwordHeavy* AttackWeaponSword = NewObject<UAttackWeaponSwordHeavy>(Outer);
	AttackWeaponSword->Init(Weapon, 10.f, 1.f);

	return AttackWeaponSword;
}


void UAttackWeaponSwordHeavy::BeginPlay()
{
	Anims.Add(LoadObject<UAnimMontage>(NULL, TEXT("AnimMontage'/Game/Animations/AttackSwordHeavyMontage.AttackSwordHeavyMontage'")));
}
