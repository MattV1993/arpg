#include "../Public/AttackWeaponSword.h"

UAttackWeaponSword* UAttackWeaponSword::Create(UObject* Outer, AWeapon* Weapon)
{
	UAttackWeaponSword* AttackWeaponSword = NewObject<UAttackWeaponSword>(Outer);
	AttackWeaponSword->Init(Weapon, 0.f, 0.f);

	return AttackWeaponSword;
}

void UAttackWeaponSword::BeginPlay()
{
	Anims.Add(LoadObject<UAnimMontage>(NULL, TEXT("AnimMontage'/Game/Animations/AttackMontage.AttackMontage'")));
	Anims.Add(LoadObject<UAnimMontage>(NULL, TEXT("AnimMontage'/Game/Animations/Attack2Montage.Attack2Montage'")));
	Anims.Add(LoadObject<UAnimMontage>(NULL, TEXT("AnimMontage'/Game/Animations/Attack3Montage.Attack3Montage'")));
}
