#include "Loadout.h"

#include "Item.h"
#include "Armour.h"
#include "Shield.h"

#include "Attack/Public/AttackWeaponSword.h"

ULoadout* ULoadout::Create(UObject* Outer, USkeletalMeshComponent* Owner)
{
	ULoadout* Loadout = NewObject<ULoadout>(Owner);
	Loadout->Owner = Owner;

	return Loadout;
}

void ULoadout::Equip(AItem* Item)
{
	if (Item->IsA(AArmour::StaticClass()))
	{
		AArmour* ArmourItem = Cast<AArmour>(Item);

		if (ArmourItem->GetSpec().Type == ArmourType::Head)
		{
			HeadArmour = ArmourItem;

			HeadArmour->AttachToComponent(
				Owner,
				FAttachmentTransformRules::SnapToTargetNotIncludingScale,
				FName(TEXT("head_socket")));
		}
		else if (ArmourItem->GetSpec().Type == ArmourType::Chest)
		{
			ChestArmour = ArmourItem;

			ChestArmour->AttachToComponent(
				Owner,
				FAttachmentTransformRules::SnapToTargetNotIncludingScale,
				FName(TEXT("chest_socket")));
		}
		else if (ArmourItem->GetSpec().Type == ArmourType::Leg)
		{
			LegArmour = ArmourItem;

			LegArmour->AttachToComponent(
				Owner,
				FAttachmentTransformRules::SnapToTargetNotIncludingScale,
				FName(TEXT("leg_socket")));
		}
		else if (ArmourItem->GetSpec().Type == ArmourType::Glove)
		{
			GloveArmour = ArmourItem;

			GloveArmour->AttachToComponent(
				Owner,
				FAttachmentTransformRules::SnapToTargetNotIncludingScale,
				FName(TEXT("glove_socket")));
		}
		else if (ArmourItem->GetSpec().Type == ArmourType::Boot)
		{
			BootArmour = ArmourItem;

			BootArmour->AttachToComponent(
				Owner,
				FAttachmentTransformRules::SnapToTargetNotIncludingScale,
				FName(TEXT("boot_socket")));
		}
	}
	else if (Item->IsA(AWeapon::StaticClass()))
	{
		EquipWeapon(Cast<AWeapon>(Item));
	}
	else if (Item->IsA(AShield::StaticClass()))
	{
		Shield = Cast<AShield>(Item);

		if (Weapon && Weapon->TwoHanded())
		{
			Shield->AttachToComponent(
				Owner,
				FAttachmentTransformRules::SnapToTargetNotIncludingScale,
				FName(TEXT("secondary_weapon_socket")));
		}
		else
		{
			Shield->AttachToComponent(
				Owner,
				FAttachmentTransformRules::SnapToTargetNotIncludingScale,
				FName(TEXT("shield_socket")));
		}
	}
}

void ULoadout::SwapWeapons()
{
	if (Weapon == nullptr || SecondaryWeapon == nullptr)
	{
		return;
	}

	EquipWeapon(SecondaryWeapon);
}

void ULoadout::UseAttack()
{
	if (IsCasting)
	{

	}
	else
	{
		Weapon->GetStandardAttack()->Use(Owner);
		LastAttack = Weapon->GetStandardAttack();
	}
}

void ULoadout::UseHeavyAttack()
{
	if (IsCasting)
	{

	}
	else
	{
		Weapon->GetHeavyAttack()->Use(Owner);
		LastAttack = Weapon->GetHeavyAttack();
	}
}

UAttack* ULoadout::GetAttack()
{
	if (IsCasting)
	{

	}
	else
	{
		return Weapon->GetStandardAttack();
	}
}

UAttack* ULoadout::GetHeavyAttack()
{
	if (IsCasting)
	{

	}
	else
	{
		return Weapon->GetHeavyAttack();
	}
}

FWeaponSpec ULoadout::GetOutWeaponSpec() const
{
	FWeaponSpec WeaponSpec;
	WeaponSpec.Damage.Damage = 0;
	WeaponSpec.AttackSpeed = 0;

	if (Weapon)
	{
		WeaponSpec = Weapon->GetSpec();
	}

	return WeaponSpec;
}

FDamageSpec ULoadout::ResolveIncomingDamageSpec(FDamageSpec Spec) const
{
	float Armour = 0;

	if (HeadArmour)
	{
		Armour += HeadArmour->GetSpec().Protection;
	}
	if (ChestArmour)
	{
		Armour += ChestArmour->GetSpec().Protection;
	}
	if (LegArmour)
	{
		Armour += LegArmour->GetSpec().Protection;
	}
	if (GloveArmour)
	{
		Armour += GloveArmour->GetSpec().Protection;
	}
	if (BootArmour)
	{
		Armour += BootArmour->GetSpec().Protection;
	}

	float Damage = Spec.Damage;

	float Mod = (Armour / 100) * Damage;
	Mod *= Damage;

	Spec.Damage = Damage - Mod;

	return Spec;
}

void ULoadout::ToggleCasting()
{
	IsCasting = !IsCasting;
}

void ULoadout::PostInitProperties()
{
	Super::PostInitProperties();

	if (GetOuter() && GetOuter()->GetWorld())
	{
		BeginPlay();
	}
}

void ULoadout::BeginPlay()
{
}

void ULoadout::EquipWeapon(AWeapon* NewWeapon)
{
	if (Weapon)
	{
		SecondaryWeapon = Weapon;
		SecondaryWeapon->DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);
		SecondaryWeapon->AttachToComponent(Owner, FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName{ TEXT("secondary_weapon_socket") });
	}

	Weapon = NewWeapon;
	Weapon->AttachToComponent(
		Owner,
		FAttachmentTransformRules::SnapToTargetNotIncludingScale,
		FName{ Weapon->SocketName() });

	if (Weapon->TwoHanded())
	{
		if (Shield)
		{
			Shield->DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);
			Shield->AttachToComponent(Owner, FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName{ TEXT("secondary_weapon_socket") });
		}
	}
	else
	{
		if (Shield)
		{
			Shield->DetachFromActor(FDetachmentTransformRules::KeepRelativeTransform);
			Shield->AttachToComponent(Owner, FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName{ TEXT("shield_socket") });
		}
	}
}

UAttack* ULoadout::GetLastAttack()
{
	return LastAttack;
}
