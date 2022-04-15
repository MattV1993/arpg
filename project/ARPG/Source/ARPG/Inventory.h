#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Inventory.generated.h"

class UInventoryItem;

UCLASS()
class ARPG_API UInventory : public UObject
{
	GENERATED_BODY()

public:

	UInventory();

	void AddItem(UInventoryItem* NewItem);
	void AddItem(UInventoryItem* NewItem, int32 Index);

	const TArray<UInventoryItem*>& GetItems() const;

private:

	TArray<UInventoryItem*> Items;
	
};
