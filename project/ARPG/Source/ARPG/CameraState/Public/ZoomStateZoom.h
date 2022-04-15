// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "ZoomState.h"

#include "ZoomStateZoom.generated.h"

/**
 * 
 */
UCLASS()
class ARPG_API UZoomStateZoom : public UZoomState
{

	GENERATED_BODY()
public:

	void Action(UZoomStateContext* Context) override;

	bool TryTranitionTo(UClass* Type, UZoomStateContext* Context) override;

	void Tick(float DeltaSeconds, UZoomStateContext* Context) override;

	FString GetName() const override;
};
