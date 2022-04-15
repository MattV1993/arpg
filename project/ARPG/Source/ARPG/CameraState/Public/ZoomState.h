#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "../../FSM/Public/StateBase.h"

#include "ZoomState.generated.h"

class UZoomStateContext;

UCLASS()
class ARPG_API UZoomState : public UObject, public StateBase<UZoomStateContext>
{
	GENERATED_BODY()
	
public:

	FString GetName() const override;
};

template <class T>
class ZoomStateCreator : public StateCreator<T, UZoomState>
{
public:

};
