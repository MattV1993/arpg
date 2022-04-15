#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyAttackMontage.generated.h"


UCLASS()
class ARPG_API UAnimNotifyAttackMontage : public UAnimNotifyState
{
	GENERATED_BODY()

	void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
};
