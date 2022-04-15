#include "Inventory.h"
#include "PickupItem.h"

UInventory::UInventory()
{
    Items.SetNum(32, false);
}

void UInventory::AddItem(UInventoryItem* NewItem)
{
    int32 Index = 0;

    for (auto Item : Items)
    {
        if (Item == nullptr)
        {
            break;
        }

        Index++;
    }

    AddItem(NewItem, Index);
}

void UInventory::AddItem(UInventoryItem* NewItem, int32 Index)
{
    if (Index >= 32)
    {
        return;
    }

    if (Items[Index] != nullptr)
    {
        AddItem(Items[Index]);
    }

    Items.RemoveAt(Index);
    Items.Insert(NewItem, Index);
}

const TArray<UInventoryItem*>& UInventory::GetItems() const
{
    return Items;
}
