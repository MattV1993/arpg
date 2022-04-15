#include "SpellInventory.h"

void USpellInventory::AddSpell(USpellItem* Spell)
{
    ActiveSpells.Add(Spell);
}

const TArray<USpellItem*>& USpellInventory::GetActiveSpells()
{
    return ActiveSpells;
}
