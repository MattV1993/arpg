// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "../../DamageReceiver.h"

#include "Attack.generated.h"

class ACharacter;

UCLASS()
class ARPG_API UAttack : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION()
	virtual void Use(USkeletalMeshComponent* Owner);

	UFUNCTION()
	virtual void Reset(USkeletalMeshComponent* Owner);

	UFUNCTION()
	virtual float GetSpeed() const;

	UFUNCTION()
	virtual FDamageSpec GetDamageSpec() const;

	virtual bool CanCombo() const;

	UFUNCTION()
	int GetCombo() const;

	void PostInitProperties() override;

	virtual void AnimNotify();

protected:

	virtual void BeginPlay();

	UPROPERTY()
	TArray<UAnimMontage*> Anims;

	UPROPERTY()
	int Combo;
	
};
