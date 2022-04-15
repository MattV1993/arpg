#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CoreMinimal.h"

#include "AnimalStateWalk.generated.h"

class UAnimalStateContext;

UCLASS()
class ARPG_API UAnimalStateWalk : public UAnimalState
{
	GENERATED_BODY()

public:

	void Action(UAnimalStateContext* Context) override;

	FString GetName() const override;
	
};
