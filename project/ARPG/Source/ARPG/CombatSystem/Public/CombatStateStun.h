// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatState.h"
#include "CombatStateStun.generated.h"

USTRUCT(Blueprintable)
struct FStunAnims
{
	GENERATED_BODY()

		UPROPERTY(EditDefaultsOnly)
		UAnimMontage* StunMontageF;

	UPROPERTY(EditDefaultsOnly)
		UAnimMontage* StunMontageB;

	UPROPERTY(EditDefaultsOnly)
		UAnimMontage* StunMontageL;

	UPROPERTY(EditDefaultsOnly)
		UAnimMontage* StunMontageR;
};

UCLASS()
class ARPG_API UCombatStateStun : public UCombatState
{
	GENERATED_BODY()

public:

	void Init(UAnimMontage* StunMontageF, UAnimMontage* StunMontageB, UAnimMontage* StunMontageL, UAnimMontage* StunMontageR);

	void Action(UCombatSystemContext* Context) override;

	bool TryTranitionTo(UClass* Type, UCombatSystemContext* Context) override;

	FString GetName() const override;

protected:

	UFUNCTION()
	void StunFinished(UCombatSystemContext* Context);
	
private:

	UAnimMontage* OwnerStunMontageF;
	UAnimMontage* OwnerStunMontageB;
	UAnimMontage* OwnerStunMontageL;
	UAnimMontage* OwnerStunMontageR;

	FTimerHandle StunFinishedTimer;
};
