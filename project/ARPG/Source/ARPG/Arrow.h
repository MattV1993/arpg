#pragma once

#include "Weapon.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Arrow.generated.h"

class UProjectileMovementComponent;
class UBoxComponent;

UCLASS()
class ARPG_API AArrow : public AActor
{
	GENERATED_BODY()
	
public:	

	AArrow();

	void Fire(AActor* Owner, FRotator Rotation);

	virtual void Tick(float DeltaTime) override;

	void SetSpec(const FWeaponSpec& WeaponSpec);

protected:

	virtual void BeginPlay() override;

private:

	UFUNCTION()
		void BeginOverlap(UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult& Hit);

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* Feather;

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* Shaft;

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* Head;

	UPROPERTY()
	UProjectileMovementComponent* MovementComponent;

	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* Collision;

	FWeaponSpec Spec;

	bool Landed;
};
