#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "DamageHandler.h"

#include "HitReceiver.generated.h"

class UTeam;

UINTERFACE(MinimalAPI)
class UHitReceiver : public UInterface
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct FHitSpec
{
	GENERATED_BODY()

	UPROPERTY()
	FWeaponSpec WeaponSpec;

	UPROPERTY()
	FVector Location;

	UPROPERTY()
	FVector Normal;

	UPROPERTY()
	AActor* Sender;
};

class ARPG_API IHitReceiver
{
	GENERATED_BODY()

public:

	virtual void OnHit(const FHitSpec& Hit) = 0;

	virtual bool CanHit(const UTeam* Other) const = 0;
};
