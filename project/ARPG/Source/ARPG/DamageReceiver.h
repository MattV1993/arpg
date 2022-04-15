#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DamageReceiver.generated.h"

UINTERFACE(MinimalAPI)
class UDamageReceiver : public UInterface
{
	GENERATED_BODY()
};

USTRUCT(Blueprintable)
struct FDamageSpec
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	float Damage;

	UPROPERTY(EditDefaultsOnly)
	float StunChance;
};

class ARPG_API IDamageReceiver
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void OnDamageReceived(const FDamageSpec& Damage) = 0;
};
