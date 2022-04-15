// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/ARPGCharacterBaseAI.h"
#include "../Public/ARPGAIController.h"

void AARPGCharacterBaseAI::OnHit(const FHitSpec& Hit)
{
	AARPGCharacterBase::OnHit(Hit);

	Cast<AARPGAIController>(GetController())->OnHit(Hit.Sender);
}