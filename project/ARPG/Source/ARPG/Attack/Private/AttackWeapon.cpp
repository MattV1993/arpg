#include "../Public/AttackWeapon.h"
#include "../../Weapon.h"

UAttackWeapon* UAttackWeapon::Create(UObject* Outer, AWeapon* Weapon, float ExtraDamage, float ExtraSpeed)
{
	UAttackWeapon* AttackWeapon = NewObject<UAttackWeapon>(Outer);
	AttackWeapon->Init(Weapon, ExtraDamage, ExtraSpeed);

	return AttackWeapon;
}

void UAttackWeapon::Use(USkeletalMeshComponent* Owner)
{
	UAttack::Use(Owner);
}

void UAttackWeapon::Reset(USkeletalMeshComponent* Owner)
{
	UAttack::Reset(Owner);
}

float UAttackWeapon::GetSpeed() const
{
	return CurrentWeapon->GetSpec().AttackSpeed;
}

void UAttackWeapon::AnimNotify()
{
	if (WeaponAnims.Num() <= Combo)
	{
		CurrentWeapon->GetMesh()->GetAnimInstance()->Montage_Play(WeaponAnims[Combo - 1]);
	}
}

void UAttackWeapon::Init(AWeapon* Weapon, float ExtraDamage, float ExtraSpeed)
{
	CurrentWeapon = Weapon;
	AttackExtraDamage = ExtraDamage;
	AttackExtraSpeed = ExtraSpeed;
}

void UAttackWeapon::BeginPlay()
{
	
}
