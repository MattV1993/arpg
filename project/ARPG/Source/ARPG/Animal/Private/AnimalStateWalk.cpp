#include "../Public/AnimalStateWalk.h"
#include "../Public/AnimalStateContext.h"
#include "../Public/Animal.h"

#include "GameFramework/CharacterMovementComponent.h"

void UAnimalStateWalk::Action(UAnimalStateContext* Context)
{
	UCharacterMovementComponent* MovementPtr = Cast<UCharacterMovementComponent>(Context->GetAnimal()->GetCharacterMovement());
	MovementPtr->MaxWalkSpeed = 200;
}

FString UAnimalStateWalk::GetName() const
{
	return FString{ TEXT("Walk") };
}