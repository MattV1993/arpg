// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatState.h"
#include "CombatStateJump.generated.h"

class ACharacter;

UCLASS()
class ARPG_API UCombatStateJump : public UCombatState
{
	GENERATED_BODY()

public:

	void Init();

	void Action(UCombatSystemContext* Context) override;

	bool TryTranitionTo(UClass* Type, UCombatSystemContext* Context) override;

	void Tick(float DeltaSeconds, UCombatSystemContext* Context) override;

	FString GetName() const override;

protected:

private:
	
};
