#include "Item.h"
#include "Components/SphereComponent.h"

AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

	PickupSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	PickupSphere->SetSphereRadius(100, true);
	PickupSphere->SetGenerateOverlapEvents(true);

	RootComponent = PickupSphere;

	DisablePickupSphere();

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->AttachTo(RootComponent);
}

void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

USkeletalMeshComponent* AItem::GetMesh()
{
	return Mesh;
}

void AItem::EnablePickupSphere()
{
	PickupSphere->Activate();
	PickupSphere->SetGenerateOverlapEvents(true);
}

void AItem::DisablePickupSphere()
{
	PickupSphere->SetGenerateOverlapEvents(false);
	PickupSphere->Deactivate();
}

