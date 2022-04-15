#include "../Public/AnimNotifySpawnArrow.h"
#include "../../ARPGCharacter.h"
#include "../../Loadout.h"
#include "../../WeaponBow.h"
#include "../../Arrow.h"

UAnimNotifySpawnArrow::UAnimNotifySpawnArrow()
{
	
}

void UAnimNotifySpawnArrow::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
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

	Character->DrawArrow();
}
