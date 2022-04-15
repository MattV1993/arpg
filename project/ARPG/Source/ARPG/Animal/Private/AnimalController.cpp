#include "../Public/AnimalController.h"
#include "../../ARPGCharacterBase.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"

#include "Perception/AISenseConfig_Sight.h"

AAnimalController::AAnimalController()
{
	PrimaryActorTick.bCanEverTick = true;

	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>("PerceptionComponent");
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SR Sight Config"));
	Blackboard = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Blackboard"));

	SightConfig->SightRadius = 4000;
	SightConfig->LoseSightRadius = 9000;
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;

	PerceptionComponent->ConfigureSense(*SightConfig);

	TargetingAttackingActor = false;
}

void AAnimalController::ActorsPerceptionUpdated(const TArray<AActor*>& UpdatedActors)
{
	UObject* TargetObject = Blackboard->GetValueAsObject(FName{ TEXT("Target") });

	if (TargetObject)
	{
		auto CharacterTarget = Cast<AARPGCharacterBase>(TargetObject);

		if (CharacterTarget->GetCurrentStateString() == FString{ TEXT("Death") })
		{
			Blackboard->SetValueAsObject(FName{ TEXT("Target") }, nullptr);
			TargetingAttackingActor = false;
		}
		else
		{
			return;
		}
	}

	for (auto Actor : UpdatedActors)
	{
		if (TryMakeActorTarget(Actor))
		{
			TargetingAttackingActor = false;
			return;
		}
	}
}

void AAnimalController::OnHit(AActor* Sender)
{
	UObject* TargetObject = Blackboard->GetValueAsObject(FName{ TEXT("Target") });

	if (TargetObject && TargetingAttackingActor == true)
	{
		return;
	}

	TryMakeActorTarget(Sender);
	TargetingAttackingActor = true;
}

void AAnimalController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UObject* TargetObject = Blackboard->GetValueAsObject(FName{ TEXT("Target") });

	if (TargetObject)
	{
		auto CharacterTarget = Cast<AARPGCharacterBase>(TargetObject);

		if (FVector::Dist(CharacterTarget->GetActorLocation(), GetCharacter()->GetActorLocation()) > SightConfig->LoseSightRadius)
		{
			Blackboard->SetValueAsObject(FName{ TEXT("Target") }, nullptr);
			TargetingAttackingActor = false;

			return;
		}
	}
}

bool AAnimalController::TryMakeActorTarget(AActor* PotentialTarget)
{
	auto CharacterTarget = Cast<AARPGCharacterBase>(PotentialTarget);

	if (CharacterTarget == nullptr)
	{
		return false;
	}

	if (CharacterTarget->GetCurrentStateString() == FString{ TEXT("Death") })
	{
		return false;
	}

	Blackboard->SetValueAsObject(FName{ TEXT("Target") }, CharacterTarget);

	return true;
}
