// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ARPGCharacterBase.h"

#include "ARPGCharacter.generated.h"

UCLASS(config=Game)
class AARPGCharacter : public AARPGCharacterBase
{
	GENERATED_BODY()

public:

	AARPGCharacter();

	void Tick(float DeltaSeconds) override;

	FORCEINLINE class UUserWidget* GetCrosshair() const { return Crosshair; }

protected:

	void BeginPlay() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	bool ShouldRotate() override;

	UPROPERTY()
		class UZoomStateContext* ZoomState;

private:

	void DisplayShowItem() override;
	void HideShowItem() override;

	void ShowInventory();

	TSubclassOf<UUserWidget> CrosshairObject;
	TSubclassOf<UUserWidget> PickupItemObject;
	TSubclassOf<UUserWidget> QuickbarObject;
	TSubclassOf<UUserWidget> InventoryObject;

	UPROPERTY()
	UUserWidget* Crosshair;

	UPROPERTY()
	UUserWidget* PickupItemDisplay;

	UPROPERTY()
	UUserWidget* Quickbar;

	UPROPERTY()
	UUserWidget* InventoryUI;
};

