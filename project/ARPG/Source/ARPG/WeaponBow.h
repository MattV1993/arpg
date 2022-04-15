#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "WeaponBow.generated.h"

class AArrow;

UCLASS()
class ARPG_API AWeaponBow : public AWeapon
{
	GENERATED_BODY()

public:

	AWeaponBow();

	void Fire(AActor* Owner, FVector Position, FRotator Rotation);

	FString SocketName() const override;

	bool TwoHanded() const override;

protected:

	void BeginPlay() override;

private:

	TSubclassOf<class AArrow> ArrowObject;
	
};
