// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/ZoomStateIdle.h"
#include "../Public/ZoomStateContext.h"

#include "Blueprint/UserWidget.h"

void UZoomStateIdle::Action(UZoomStateContext* Context)
{
	UZoomState::Action(Context);

	Context->GetCharacterIdleCamera()->Activate();
	Context->GetCharacterZoomCamera()->Deactivate();

	Context->GetCharacter()->GetCrosshair()->RemoveFromViewport();
}

bool UZoomStateIdle::TryTranitionTo(UClass* Type, UZoomStateContext* Context)
{
	return UZoomState::TryTranitionTo(Type, Context);
}

void UZoomStateIdle::Tick(float DeltaSeconds, UZoomStateContext* Context)
{
	UZoomState::Tick(DeltaSeconds, Context);
}

FString UZoomStateIdle::GetName() const
{
	return FString{ TEXT("ZoomIdle") };
}
