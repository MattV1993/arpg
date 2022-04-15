// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "../../ARPGCharacter.h"
#include "Camera/CameraComponent.h"

#include "../../FSM/Public/StateContextBase.h"
#include "../Public/ZoomState.h"


#include "ZoomStateContext.generated.h"


UCLASS()
class ARPG_API UZoomStateContext : public UObject, public StateContextBase<UZoomStateContext, UZoomState>
{
	GENERATED_BODY()

public:

	static UZoomStateContext* Create(UObject* Outer, StateRegistry<UZoomState>&& Registry, AARPGCharacter* Character);

	void SetState(UZoomState* State) override;

	UZoomState* GetCurrentState() const override;

	AARPGCharacter* GetCharacter();

	UCameraComponent* GetCharacterIdleCamera();
	UCameraComponent* GetCharacterZoomCamera();

	void PostInitProperties() override;

protected:

	void BeginPlay();

private:

	UPROPERTY()
	UZoomState* CurrentState;

	AARPGCharacter* OwningCharacter;
};





