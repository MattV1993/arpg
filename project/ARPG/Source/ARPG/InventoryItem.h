// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InventoryItem.generated.h"

class AItem;

UCLASS()
class ARPG_API UInventoryItem : public UObject
{
	GENERATED_BODY()

public:

	static UInventoryItem* Create(UObject* Outer, UClass* SpawnClass);

	AItem* SpawnItem();

	UPROPERTY(EditDefaultsOnly)
		UClass* SpawnClass;

protected:

};
