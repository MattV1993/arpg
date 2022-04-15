#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "SpellItem.h"

#include "SpellInventory.generated.h"

UCLASS()
class ARPG_API USpellInventory : public UObject
{
	GENERATED_BODY()

public:

	void AddSpell(USpellItem* Spell);

	const TArray<USpellItem*>& GetActiveSpells();

private:

	TArray<USpellItem*> ActiveSpells;
	
};
