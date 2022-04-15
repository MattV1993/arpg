#include "ARPGCharacter.h"

#include "WeaponBow.h"
#include "Loadout.h"

#include "Blueprint/UserWidget.h"

#include "CameraState/Public/ZoomStateContext.h"
#include "CameraState/Public/ZoomStateIdle.h"
#include "CameraState/Public/ZoomStateZoom.h"

AARPGCharacter::AARPGCharacter()
{
	static ConstructorHelpers::FObjectFinder<UBlueprint> CrosshairBlueprint{ TEXT("WidgetBlueprint'/Game/UI/Crosshair.Crosshair'") };

	if (CrosshairBlueprint.Succeeded())
	{
		CrosshairObject = static_cast<UClass*>(CrosshairBlueprint.Object->GeneratedClass);
	}

	static ConstructorHelpers::FObjectFinder<UBlueprint> PickupItemBlueprint{ TEXT("WidgetBlueprint'/Game/UI/PickupMessage.PickupMessage'") };

	if (PickupItemBlueprint.Succeeded())
	{
		PickupItemObject = static_cast<UClass*>(PickupItemBlueprint.Object->GeneratedClass);
	}

	static ConstructorHelpers::FObjectFinder<UBlueprint> QuickbarBlueprint{ TEXT("WidgetBlueprint'/Game/UI/Quickbar.Quickbar'") };

	if (QuickbarBlueprint.Succeeded())
	{
		QuickbarObject = static_cast<UClass*>(QuickbarBlueprint.Object->GeneratedClass);
	}

	static ConstructorHelpers::FObjectFinder<UBlueprint> InventoryBlueprint{ TEXT("WidgetBlueprint'/Game/UI/Inventory.Inventory'") };

	if (InventoryBlueprint.Succeeded())
	{
		InventoryObject = static_cast<UClass*>(InventoryBlueprint.Object->GeneratedClass);
	}
}

void AARPGCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	ZoomState->Tick(DeltaSeconds);

	if (BlockPressed)
	{
		auto Bow = Cast<AWeaponBow>(Loadout->Weapon);

		if (Bow != nullptr)
		{
			if (ZoomState->GetCurrentState()->GetName() == "ZoomIdle")
			{
				ZoomState->SetIntent(UZoomStateZoom::StaticClass());
			}
		}
	}
	else if (ZoomState->GetCurrentState()->GetName() == "Zoom")
	{
		ZoomState->SetIntent(UZoomStateIdle::StaticClass());
	}
}

void AARPGCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("ShowInventory", IE_Pressed, this, &AARPGCharacter::ShowInventory);
}

bool AARPGCharacter::ShouldRotate()
{
	return !GetVelocity().IsZero() || (ZoomState->GetCurrentState()->StaticClass() == UZoomStateZoom::StaticClass());
}

void AARPGCharacter::DisplayShowItem()
{
	PickupItemDisplay->AddToViewport();
}

void AARPGCharacter::HideShowItem()
{
	PickupItemDisplay->RemoveFromViewport();
}

void AARPGCharacter::ShowInventory()
{
	if (InventoryUI->IsInViewport())
	{
		InventoryUI->RemoveFromViewport();
	}
	else
	{
		InventoryUI->AddToViewport();
	}
}

void AARPGCharacter::BeginPlay()
{
	Super::BeginPlay();

	StateRegistry<UZoomState> ZoomRegistry;

	ZoomRegistry.Register(MakeUnique<StateCreator<UZoomStateIdle, UZoomState>>(GetOuter()));
	ZoomRegistry.Register(MakeUnique<StateCreator<UZoomStateZoom, UZoomState>>(GetOuter()));

	ZoomState = UZoomStateContext::Create(GetOuter(), MoveTemp(ZoomRegistry), this);
	ZoomState->SetState(ZoomState->GetRegistry().Find(UZoomStateIdle::StaticClass())->Create());

	Crosshair = CreateWidget<UUserWidget>(GetWorld(), CrosshairObject);
	PickupItemDisplay = CreateWidget<UUserWidget>(GetWorld(), PickupItemObject);
	Quickbar = CreateWidget<UUserWidget>(GetWorld(), QuickbarObject);
	InventoryUI = CreateWidget<UUserWidget>(GetWorld(), InventoryObject);

	GetTeam()->SetName(FName{ TEXT("1") });

	Quickbar->AddToViewport();
}
