#include "../Public/AnimalStateDeath.h"
#include "../Public/AnimalStateContext.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"

void UAnimalStateDeath::Action(UAnimalStateContext* Context)
{
	Context->GetAnimal()->GetCharacterMovement()->DisableMovement();
	Context->GetAnimal()->GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Context->GetAnimal()->GetMesh()->SetAllBodiesSimulatePhysics(true);
	Context->GetAnimal()->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

bool UAnimalStateDeath::TryTranitionTo(UClass* Type, UAnimalStateContext* Context)
{
	return false;
}

FString UAnimalStateDeath::GetName() const
{
	return FString{ TEXT("Death") };
}