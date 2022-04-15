// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifySpawnArrow.generated.h"

class AArrow;

UCLASS()
class ARPG_API UAnimNotifySpawnArrow : public UAnimNotifyState
{
	GENERATED_BODY()

public:

	UAnimNotifySpawnArrow();

private:
	
	void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) override;
};
