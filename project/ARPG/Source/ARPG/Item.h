#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

class USphereComponent;

UCLASS()
class ARPG_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	
	AItem();

	virtual void Tick(float DeltaTime) override;

	USkeletalMeshComponent* GetMesh();

	UFUNCTION(BlueprintCallable)
	void EnablePickupSphere();

	void DisablePickupSphere();

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	float Weight;

	UPROPERTY(EditDefaultsOnly)
	USkeletalMeshComponent* Mesh;

	UPROPERTY(EditDefaultsOnly)
	USphereComponent* PickupSphere;
};
