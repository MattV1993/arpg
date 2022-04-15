#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupItem.generated.h"

class USkeletalMeshComponent;
class USphereComponent;
class AItem;

UCLASS()
class ARPG_API APickupItem : public AActor
{
	GENERATED_BODY()
	
public:	
	
	APickupItem();

	UFUNCTION(BlueprintCallable)
	void Pickup();

	UFUNCTION(BlueprintCallable)
	void Drop();

	UFUNCTION(BlueprintCallable)
	AItem* Spawn();

	UFUNCTION(BlueprintCallable)
	void DeSpawn();

protected:
	
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditDefaultsOnly)
	UClass* SpawnClass;

	UPROPERTY(EditDefaultsOnly)
	USphereComponent* Sphere;

	UPROPERTY()
		AItem* SpawnItem;
};