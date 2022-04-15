#pragma once

#include "../../ARPGCharacterBase.h"
#include "CoreMinimal.h"

#include "ARPGCharacterBaseAI.generated.h"

UCLASS()
class ARPG_API AARPGCharacterBaseAI : public AARPGCharacterBase
{
	GENERATED_BODY()

public:

protected:

	void OnHit(const FHitSpec& Hit) override;
	
};
