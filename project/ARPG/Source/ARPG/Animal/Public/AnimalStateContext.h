#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "../../FSM/Public/StateContextBase.h"
#include "../Public/AnimalState.h"
#include "../../DamageHandler.h"

#include "AnimalStateContext.generated.h"

class AAnimal;

UCLASS()
class ARPG_API UAnimalStateContext : public UObject, public StateContextBase<UAnimalStateContext, UAnimalState>
{
	GENERATED_BODY()

public:

	static UAnimalStateContext* Create(UObject* Outer, StateRegistry<UAnimalState>&& Registry, AAnimal* Owner, TScriptInterface<IDamageReceiver> DamageReceiver);

	void SetState(UAnimalState* State) override;

	UAnimalState* GetCurrentState() const override;

	void ApplyHit(const FHitSpec& Params);

	TScriptInterface<IDamageReceiver> GetDamageReceiver();

	AAnimal* GetAnimal();

protected:

private:

	UPROPERTY()
		UAnimalState* CurrentState;

	TScriptInterface<IDamageReceiver> DamageReceiver;

	AAnimal* OwningAnimal;
};
