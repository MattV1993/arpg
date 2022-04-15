#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "../../DamageReceiver.h"
#include "../../HitReceiver.h"

#include "Animal.generated.h"

class UAnimalStateContext;
class UInventory;

UCLASS()
class ARPG_API AAnimal : public ACharacter, public IHitReceiver, public IDamageReceiver
{
	GENERATED_BODY()

public:

	AAnimal();

	UFUNCTION(BlueprintCallable)
	void StartRun();

	UFUNCTION(BlueprintCallable)
	void StopRun();

	virtual void Tick(float DeltaTime) override;

	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
		FString GetCurrentStateString() const;

protected:

	virtual void BeginPlay() override;

	void OnHit(const FHitSpec& Hit) override;
	bool CanHit(const UTeam* Other) const override;

	void OnDamageReceived(const FDamageSpec& Damage) override;

	UPROPERTY(EditDefaultsOnly)
	UClass* MeatClass;

private:

	UPROPERTY()
	UAnimalStateContext* AnimalState;

	UPROPERTY()
	UInventory* Inventory;

	bool Running;

};
