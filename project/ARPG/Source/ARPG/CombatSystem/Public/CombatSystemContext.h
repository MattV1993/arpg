#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "../../FSM/Public/StateContextBase.h"

#include "../Public/CombatState.h"
#include "../../DamageHandler.h"
#include "../../DamageReceiver.h"

#include "CombatSystemContext.generated.h"

UCLASS()
class ARPG_API UCombatSystemContext : public UObject, public StateContextBase<UCombatSystemContext, UCombatState>
{
	GENERATED_BODY()

public:

	static UCombatSystemContext* Create(UObject* Outer, StateRegistry<UCombatState>&& Registry, ACharacter* Character, TScriptInterface<IDamageReceiver> DamageReceiver);

	void SetState(UCombatState* State) override;

	void ApplyHit(const FHitSpec& Params);

	TScriptInterface<IDamageReceiver> GetDamageReceiver();

	ACharacter* GetCharacter();

	UCombatState* GetCurrentState() const override;

	const FHitSpec& GetLastHit() const;

	void PostInitProperties() override;

protected:

	void BeginPlay();

private:

	UPROPERTY()
	UCombatState* CurrentState;

	UPROPERTY()
	FHitSpec LastHit;

	TScriptInterface<IDamageReceiver> DamageReceiver;

	ACharacter* OwningCharacter;
};