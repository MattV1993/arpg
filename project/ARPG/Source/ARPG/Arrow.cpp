#include "Arrow.h"
#include "HitReceiver.h"
#include "ARPGCharacterBase.h"

#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/BoxComponent.h"

AArrow::AArrow()
{
	PrimaryActorTick.bCanEverTick = false;

	Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));

	Feather = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Feather"));
	Shaft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shaft"));
	Head = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Head"));

	RootComponent = Collision;

	Shaft->AttachTo(RootComponent);
	Feather->AttachTo(Shaft, FName{ TEXT("feather") });
	Head->AttachTo(Shaft, FName{ TEXT("head") });

	MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MovementComponent"));
	MovementComponent->SetUpdatedComponent(RootComponent);
	MovementComponent->InitialSpeed = 4500;
	MovementComponent->ProjectileGravityScale = 0.5;

	MovementComponent->MaxSpeed = 4500;
	MovementComponent->bRotationFollowsVelocity = true;
	
	InitialLifeSpan = 20.0f;

	Collision->OnComponentBeginOverlap.AddDynamic(this, &AArrow::BeginOverlap);
	Collision->Deactivate();
}

void AArrow::Fire(AActor* ArrowOwner, FRotator Rotation)
{
	Collision->IgnoreActorWhenMoving(ArrowOwner, true);
	MovementComponent->Velocity = Rotation.Vector() * 4500;

	Collision->Activate();
}

void AArrow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AArrow::SetSpec(const FWeaponSpec& WeaponSpec)
{
	Spec = WeaponSpec;
}

void AArrow::BeginPlay()
{
	Super::BeginPlay();
	
	Landed = false;
}

void AArrow::BeginOverlap(UPrimitiveComponent* Component, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit)
{
	if (OtherActor == GetInstigator())
	{
		return;
	}

	if (Landed || !bFromSweep)
	{
		return;
	}

	MovementComponent->Deactivate();

	FAttachmentTransformRules AttachmentRules = FAttachmentTransformRules::SnapToTargetNotIncludingScale;
	AttachmentRules.bWeldSimulatedBodies = true;
	AttachmentRules.LocationRule = EAttachmentRule::KeepWorld;
	AttachmentRules.RotationRule = EAttachmentRule::KeepWorld;

	AttachToComponent(OtherComponent, AttachmentRules, Hit.BoneName);

	AARPGCharacterBase* Character = Cast<AARPGCharacterBase>(GetInstigator());
	IHitReceiver* Receiver = Cast<IHitReceiver>(OtherActor);

	if (Receiver)
	{
		if (Receiver->CanHit(Character->GetTeam()) == false)
		{
			return;
		}

		FHitSpec HitSpec;
		HitSpec.WeaponSpec = Spec;
		HitSpec.Location = Hit.ImpactPoint;
		HitSpec.Normal = Hit.ImpactNormal;
		HitSpec.Sender = GetInstigator();

		Receiver->OnHit(HitSpec);
	}

	Landed = true;
}



