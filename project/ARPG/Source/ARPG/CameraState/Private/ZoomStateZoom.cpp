
#include "../Public/ZoomStateZoom.h"
#include "../Public/ZoomStateContext.h"

#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "Blueprint/UserWidget.h"

void UZoomStateZoom::Action(UZoomStateContext* Context)
{
	UZoomState::Action(Context);

	Context->GetCharacterIdleCamera()->Deactivate();
	Context->GetCharacterZoomCamera()->Activate();

	UCharacterMovementComponent* MovementPtr = Cast<UCharacterMovementComponent>(Context->GetCharacter()->GetCharacterMovement());
	MovementPtr->MaxWalkSpeed = 300;

	//Context->GetCharacter()->GetZoomCameraBoom()->SetRelativeLocation(FVector{ 0,0,0 });

	Context->GetCharacter()->GetCrosshair()->AddToViewport();
}

bool UZoomStateZoom::TryTranitionTo(UClass* Type, UZoomStateContext* Context)
{
	UCharacterMovementComponent* MovementPtr = Cast<UCharacterMovementComponent>(Context->GetCharacter()->GetCharacterMovement());
	MovementPtr->MaxWalkSpeed = 600;

	return UZoomState::TryTranitionTo(Type, Context);
}

void UZoomStateZoom::Tick(float DeltaSeconds, UZoomStateContext* Context)
{
	UZoomState::Tick(DeltaSeconds, Context);

	FRotator ControllerRot = Context->GetCharacter()->GetControlRotation();
	ControllerRot.Normalize();

	FRotator ActorRotation = Context->GetCharacter()->GetActorRotation();
	ActorRotation.Normalize();

	FRotator DeltaAngle = FMath::RInterpConstantTo(
		{ 0, ActorRotation.Yaw, 0 },
		{ 0, ControllerRot.Yaw, 0 },
		GetWorld()->GetDeltaSeconds(),
		500.f);

	Context->GetCharacter()->SetActorRotation(DeltaAngle);
}

FString UZoomStateZoom::GetName() const
{
	return FString{ TEXT("Zoom") };
}

