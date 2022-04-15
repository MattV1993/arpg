#include "../Public/AnimNotifyAttackMontage.h"
#include "../../ARPGCharacter.h"
#include "../../Loadout.h"

void UAnimNotifyAttackMontage::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	if (MeshComp == nullptr || MeshComp->GetOwner() == nullptr)
	{
		return;
	}

	auto Character = Cast<AARPGCharacterBase>(MeshComp->GetOwner());

	if (Character == nullptr)
	{
		return;
	}

	Character->Loadout->GetLastAttack()->AnimNotify();
}