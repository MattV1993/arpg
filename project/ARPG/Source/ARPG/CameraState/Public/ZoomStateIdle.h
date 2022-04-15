#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "ZoomState.h"

#include "ZoomStateIdle.generated.h"

UCLASS()
class ARPG_API UZoomStateIdle : public UZoomState
{
	GENERATED_BODY()

public:


	void Action(UZoomStateContext* Context) override;

	bool TryTranitionTo(UClass* Type, UZoomStateContext* Context) override;

	void Tick(float DeltaSeconds, UZoomStateContext* Context) override;

	FString GetName() const override;
	
};
