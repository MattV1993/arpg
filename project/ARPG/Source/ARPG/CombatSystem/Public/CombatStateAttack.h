#pragma once

#include "CoreMinimal.h"

#include "CombatState.h"
#include "../../Attack/Public/AttackHolder.h"

#include "CombatStateAttack.generated.h"

UCLASS()
class ARPG_API UCombatStateAttack : public UCombatState
{
	GENERATED_BODY()

public:

	void Init(TScriptInterface<IAttackHolder> AttackHolder);

	void Action(UCombatSystemContext* Context) override;

	bool TryTranitionTo(UClass* Type, UCombatSystemContext* Context) override;

	void Tick(float DeltaSeconds, UCombatSystemContext* Context) override;

	FString GetName() const override;

protected:

	UFUNCTION()
	void AttackFinished(UCombatSystemContext* Context);

	UFUNCTION()
	bool TryTransitionNewAttack(UClass* Type, UCombatSystemContext* Context);

	UFUNCTION()
	bool TryTransitionStopAttack(UClass* Type, UCombatSystemContext* Context);

private:

	TScriptInterface<IAttackHolder> CurrentAttackHolder;

	FTimerHandle AttackFinishedTimer;
};
