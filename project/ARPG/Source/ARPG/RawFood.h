#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Cookable.h"

#include "RawFood.generated.h"

UCLASS()
class ARPG_API ARawFood : public AItem, public ICookable
{
	GENERATED_BODY()
	
};
