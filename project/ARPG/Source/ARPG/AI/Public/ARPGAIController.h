// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ARPGAIController.generated.h"

/**
 * 
 */
UCLASS()
class ARPG_API AARPGAIController : public AAIController
{
	GENERATED_BODY()

public:

	AARPGAIController();

	void ActorsPerceptionUpdated(const TArray<AActor*>& UpdatedActors) override;

	void OnHit(AActor* Sender);

protected:

	void BeginPlay() override;

	void OnPossess(APawn* InPawn) override;

private:

	bool TryMakeActorTarget(AActor* PotentialTarget);

	class UAISenseConfig_Sight* SightConfig;

	bool TargetingAttackingActor;
	
};
