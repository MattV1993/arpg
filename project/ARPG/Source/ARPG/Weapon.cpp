#include "Weapon.h"

FWeaponSpec AWeapon::GetSpec() const
{
	return Spec;
}

UAttack* AWeapon::GetStandardAttack()
{
	return StandardAttack;
}

UAttack* AWeapon::GetHeavyAttack()
{
	return HeavyAttack;
}

FString AWeapon::SocketName() const
{
	return FString(TEXT("weapon_socket"));
}

bool AWeapon::TwoHanded() const
{
	return false;
}

void AWeapon::BeginPlay()
{
	Super::BeginPlay();
}
