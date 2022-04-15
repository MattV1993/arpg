#include "../Public/AnimNotifyFireArrow.h"
#include "../../WeaponBow.h"
#include "../../ARPGCharacter.h"
#include "../../Loadout.h"

void UAnimNotifyFireArrow::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	if (MeshComp == nullptr || MeshComp->GetOwner() == nullptr)
	{
		return;
	}

	auto Character = Cast<AARPGCharacter>(MeshComp->GetOwner());

	if (Character == nullptr)
	{
		return;
	}

	Character->FireArrow();
}
