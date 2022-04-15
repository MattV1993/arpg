#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "../../FSM/Public/StateBase.h"

#include "../../HitReceiver.h"


#include "AnimalState.generated.h"

class UAnimalStateContext;

UCLASS()
class ARPG_API UAnimalState : public UObject, public StateBase<UAnimalStateContext>
{
	GENERATED_BODY()

public:

	virtual void ApplyHit(const FHitSpec& Params, UAnimalStateContext* Context);

	FString GetName() const override;
};

template <class T>
class AnimalStateCreator : public StateCreator<T, UAnimalState>
{
public:

};