#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyFireArrow.generated.h"

UCLASS()
class ARPG_API UAnimNotifyFireArrow : public UAnimNotifyState
{
	GENERATED_BODY()
	
	void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
};
