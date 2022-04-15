#include "WeaponSword.h"

#include "Attack/Public/AttackWeaponSword.h"
#include "Attack/Public/AttackWeaponSwordHeavy.h"

AWeaponSword::AWeaponSword()
{
	Spec.Damage.StunChance = 100;
}

void AWeaponSword::BeginPlay()
{
	Super::BeginPlay();

	StandardAttack = UAttackWeaponSword::Create(GetOuter(), this);
	HeavyAttack = UAttackWeaponSwordHeavy::Create(GetOuter(), this);
}