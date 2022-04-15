#include "DummyArrow.h"

ADummyArrow::ADummyArrow()
{
	PrimaryActorTick.bCanEverTick = false;

	Feather = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Feather"));
	Shaft = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shaft"));
	Head = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Head"));

	RootComponent = Shaft;

	//Shaft->AttachTo(RootComponent);
	Feather->AttachTo(Shaft, FName{ TEXT("feather") });
	Head->AttachTo(Shaft, FName{ TEXT("head") });
}

// Called when the game starts or when spawned
void ADummyArrow::BeginPlay()
{
	Super::BeginPlay();
	
}

