#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "HitReceiver.h"
#include "DamageReceiver.h"
#include "DamageSender.h"

#include "Team.h"

#include "CombatSystem/Public/CombatStateStun.h"

#include "ARPGCharacterBase.generated.h"

class AWeapon;
class AShield;
class AArmour;
class UInventory;

UCLASS()
class ARPG_API AARPGCharacterBase : public ACharacter, public IHitReceiver, public IDamageReceiver, public IDamageSender
{
	GENERATED_BODY()

public:

	AARPGCharacterBase();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void DrawArrow();
	void FireArrow();

	void DestructArrow();

	bool BlockPressed;

	UFUNCTION(BlueprintCallable)
	void TryJump();

	void StopJumping() override;

	UFUNCTION(BlueprintCallable)
		FString GetCurrentStateString() const;

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	FORCEINLINE class USpringArmComponent* GetZoomCameraBoom() const { return ZoomCameraBoom; }
	FORCEINLINE class UCameraComponent* GetZoomCamera() const { return ZoomCamera; }

	FORCEINLINE const UTeam* GetTeam() const { return Team; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE UTeam* GetTeam() { return Team; }

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	UPROPERTY()
		class UCombatSystemContext* CombatSystem;

	UPROPERTY()
		class ULoadout* Loadout;

	UPROPERTY(EditDefaultsOnly)
		FStunAnims StunAnims;

protected:

	virtual void BeginPlay() override;

	void MoveForward(float Value);
	void MoveRight(float Value);

	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);

	UFUNCTION(BlueprintCallable)
		void AttackPressed();

	UFUNCTION(BlueprintCallable)
		void AttackReleased();

	UFUNCTION(BlueprintCallable)
		void StartBlock();

	UFUNCTION(BlueprintCallable)
		void StopBlock();

	void OnHit(const FHitSpec& Hit) override;
	bool CanHit(const UTeam* Other) const override;

	void OnDamageReceived(const FDamageSpec& Damage) override;
	void GiveHit() override;

	UFUNCTION(BlueprintCallable)
		void SwapWeapons();

	UFUNCTION(BlueprintCallable)
		void TryDodge();

	UFUNCTION(BlueprintCallable)
		void ToggleCasting();


	virtual bool ShouldRotate();

	void RotateTowardController();

	void PickupItem();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* ZoomCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* ZoomCameraBoom;

	AItem* OverlappedItem;

private:

	virtual void DisplayShowItem();
	virtual void HideShowItem();

	UFUNCTION()
	void BeginOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION()
		void EndOverlap(UPrimitiveComponent* OverlappedComp,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex);

	TSubclassOf<AWeapon> SwordObject;
	TSubclassOf<AWeapon> BowObject;
	TSubclassOf<AShield> ShieldObject;
	TSubclassOf<AArmour> ChestObject;

	TSubclassOf<class ADummyArrow> ArrowObject;

	UPROPERTY()
		class ADummyArrow* CurrentDummyArrow;

	UPROPERTY(EditDefaultsOnly)
		float Health;

	bool Casting;

	FDateTime StartAttackPressed;

	UPROPERTY()
	UTeam* Team;

	UPROPERTY()
		UInventory* Inventory;
};
