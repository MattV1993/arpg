// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Equipment.h"
#include "Armour.generated.h"

UENUM(BlueprintType)
enum ArmourType
{
	Head	UMETA(DisplayName = "Head"),
	Chest	UMETA(DisplayName = "Chest"),
	Leg		UMETA(DisplayName = "Leg"),
	Glove	UMETA(DisplayName = "Glove"),
	Boot	UMETA(DisplayName = "Boot")

};

USTRUCT(BlueprintType)
struct FArmourSpec
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	float Protection;

	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<ArmourType> Type;

};

UCLASS()
class ARPG_API AArmour : public AEquipment
{
	GENERATED_BODY()
	
public:

	FArmourSpec GetSpec() const;

protected:

	UPROPERTY(EditDefaultsOnly)
	FArmourSpec Spec;
};
