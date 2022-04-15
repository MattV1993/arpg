// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "HitNotifyState.generated.h"

/**
 * 
 */
UCLASS()
class ARPG_API UHitNotifyState : public UAnimNotifyState
{
	GENERATED_BODY()

	void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime) override;
	void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	TSet<AActor*> AlreadyHit;

	
};
