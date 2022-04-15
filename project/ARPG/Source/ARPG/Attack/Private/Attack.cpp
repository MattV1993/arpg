#include "../Public/Attack.h"
#include "../../Weapon.h"

#include "GameFramework/Character.h"

void UAttack::Use(USkeletalMeshComponent* Owner)
{
	if (Combo >= Anims.Num())
	{
		Reset(Owner);
	}

	Owner->GetAnimInstance()->Montage_Play(Anims[Combo]);

	Combo++;
}

void UAttack::Reset(USkeletalMeshComponent* Owner)
{
	UAnimMontage* CurrentMontage;

	if (Combo > 0)
	{
		CurrentMontage = Anims[Combo - 1];
	}
	else
	{
		CurrentMontage = Anims[Combo];
	}

	Owner->GetAnimInstance()->Montage_Stop(
		CurrentMontage->BlendOut.GetBlendTime(),
		CurrentMontage);

	Combo = 0;
}

float UAttack::GetSpeed() const
{
	return 1.0f;
}

int UAttack::GetCombo() const
{
	return Combo;
}

FDamageSpec UAttack::GetDamageSpec() const
{
	return FDamageSpec();
}

bool UAttack::CanCombo() const
{
	return !(Combo >= Anims.Num());
}

void UAttack::PostInitProperties()
{
	Super::PostInitProperties();

	if (GetOuter() && GetOuter()->GetWorld())
	{
		BeginPlay();
	}
}

void UAttack::AnimNotify()
{
}

void UAttack::BeginPlay()
{
	Combo = 0;
}
