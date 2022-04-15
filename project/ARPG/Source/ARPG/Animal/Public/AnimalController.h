// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AnimalController.generated.h"

/**
 * 
 */
UCLASS()
class ARPG_API AAnimalController : public AAIController
{
	GENERATED_BODY()

public:
	
	AAnimalController();

	void ActorsPerceptionUpdated(const TArray<AActor*>& UpdatedActors) override;

	void OnHit(AActor* Sender);

	virtual void Tick(float DeltaTime) override;

private:

	bool TryMakeActorTarget(AActor* PotentialTarget);

	class UAISenseConfig_Sight* SightConfig;

	bool TargetingAttackingActor;

};
