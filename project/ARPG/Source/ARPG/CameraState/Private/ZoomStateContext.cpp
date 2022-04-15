#include "..\Public\ZoomStateContext.h"
#include "GameFramework/Character.h"

UZoomStateContext* UZoomStateContext::Create(UObject* Outer, StateRegistry<UZoomState>&& Registry, AARPGCharacter* Character)
{
	UZoomStateContext* Context = NewObject<UZoomStateContext>(Outer);

	Context->Registry = MoveTemp(Registry);
	Context->OwningCharacter = Character;

	return Context;
}

void UZoomStateContext::SetState(UZoomState* State)
{
	CurrentState = State;
}

UZoomState* UZoomStateContext::GetCurrentState() const
{
	return CurrentState;
}

AARPGCharacter* UZoomStateContext::GetCharacter()
{
	return OwningCharacter;
}

UCameraComponent* UZoomStateContext::GetCharacterIdleCamera()
{
	return OwningCharacter->GetFollowCamera();
}

UCameraComponent* UZoomStateContext::GetCharacterZoomCamera()
{
	return OwningCharacter->GetZoomCamera();
}

void UZoomStateContext::PostInitProperties()
{
	Super::PostInitProperties();

	if (GetOuter() && GetOuter()->GetWorld())
	{
		BeginPlay();
	}
}

void UZoomStateContext::BeginPlay()
{
}
