// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Misc/DateTime.h"

#include "../../FSM/Public/StateBase.h"

#include "../../HitReceiver.h"

#include "CombatState.generated.h"

class UCombatSystemContext;

UCLASS()
class ARPG_API UCombatState : public UObject, public StateBase<UCombatSystemContext>
{
	GENERATED_BODY()

public:

	virtual void ApplyHit(const FHitSpec& Params, UCombatSystemContext* Context);

	FString GetName() const override;	
};

template <class T>
class CombatStateCreator : public StateCreator<T, UCombatState>
{
public:

};
