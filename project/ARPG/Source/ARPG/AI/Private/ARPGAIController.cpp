#include "../Public/ARPGAIController.h"
#include "../../ARPGCharacterBase.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"

#include "Perception/AISenseConfig_Sight.h"

AARPGAIController::AARPGAIController()
{
	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>("PerceptionComponent");
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SR Sight Config"));
	Blackboard = CreateDefaultSubobject<UBlackboardComponent>(TEXT("Blackboard"));

	SightConfig->SightRadius = 3000.f;
	SightConfig->LoseSightRadius = 4000.f;
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;

	PerceptionComponent->ConfigureSense(*SightConfig);

	TargetingAttackingActor = false;
}

void AARPGAIController::ActorsPerceptionUpdated(const TArray<AActor*>& UpdatedActors)
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

void AARPGAIController::OnHit(AActor* Sender)
{
	UObject* TargetObject = Blackboard->GetValueAsObject(FName{ TEXT("Target") });

	if (TargetObject && TargetingAttackingActor == true)
	{
		return;
	}

	TryMakeActorTarget(Sender);
	TargetingAttackingActor = true;
}

void AARPGAIController::BeginPlay()
{
	Super::BeginPlay();
}

void AARPGAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
}

bool AARPGAIController::TryMakeActorTarget(AActor* PotentialTarget)
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

	auto ThisCharacter = Cast<AARPGCharacterBase>(GetCharacter());

	if (CharacterTarget->GetTeam()->GetName() == ThisCharacter->GetTeam()->GetName())
	{
		return false;
	}

	Blackboard->SetValueAsObject(FName{ TEXT("Target") }, CharacterTarget);

	return true;
}