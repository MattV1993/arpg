#include "InventoryItem.h"

UInventoryItem* UInventoryItem::Create(UObject* Outer, UClass* SpawnClass)
{
	UInventoryItem* InventoryItem = NewObject<UInventoryItem>(Outer);
	InventoryItem->SpawnClass = SpawnClass;

	return InventoryItem;
}

AItem* UInventoryItem::SpawnItem()
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	return GetWorld()->SpawnActor<AItem>(SpawnClass);
}