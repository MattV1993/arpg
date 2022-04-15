#include "../Public/AnimalStateRun.h"
#include "../Public/AnimalStateContext.h"
#include "../Public/Animal.h"

#include "GameFramework/CharacterMovementComponent.h"

void UAnimalStateRun::Action(UAnimalStateContext* Context)
{
	UCharacterMovementComponent* MovementPtr = Cast<UCharacterMovementComponent>(Context->GetAnimal()->GetCharacterMovement());
	MovementPtr->MaxWalkSpeed = 600;
}

FString UAnimalStateRun::GetName() const
{
	return FString{ TEXT("Run") };
}