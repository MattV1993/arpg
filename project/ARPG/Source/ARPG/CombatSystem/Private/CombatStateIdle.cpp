// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/CombatStateIdle.h"

FString UCombatStateIdle::GetName() const
{
	return FString{ TEXT("Idle") };
}

void UCombatStateIdle::Action(UCombatSystemContext* Context)
{
	Super::Action(Context);
}
