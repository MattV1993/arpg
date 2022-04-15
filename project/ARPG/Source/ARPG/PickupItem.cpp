#include "PickupItem.h"
#include "Item.h"

#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"

APickupItem::APickupItem()
{
	PrimaryActorTick.bCanEverTick = false;
	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));

	Sphere->SetSphereRadius(100, true);

	RootComponent = Sphere;

	Sphere->Deactivate();
}

void APickupItem::Pickup()
{
	Sphere->Deactivate();
	DeSpawn();
}

void APickupItem::Drop()
{
	Sphere->Activate();
	Spawn();
}

AItem* APickupItem::Spawn()
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Instigator = GetInstigator();
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	SpawnItem = GetWorld()->SpawnActor<AItem>(
		SpawnClass,
		RootComponent->GetComponentLocation(),
		RootComponent->GetComponentRotation(),
		SpawnParams);

	SpawnItem->AttachToComponent(RootComponent, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	return SpawnItem;
}

void APickupItem::DeSpawn()
{
	if (SpawnItem == nullptr)
	{
		return;
	}

	SpawnItem->ConditionalBeginDestroy();
	SpawnItem = nullptr;
}

void APickupItem::BeginPlay()
{
	Super::BeginPlay();
	
}