#include "WeaponBow.h"
#include "Attack/Public/AttackWeaponBow.h"
#include "Arrow.h"

AWeaponBow::AWeaponBow()
{
	Spec.Damage.StunChance = 0;

	static ConstructorHelpers::FObjectFinder<UBlueprint> ArrowBlueprint(TEXT("Blueprint'/Game/ThirdPersonCPP/Blueprints/TestArrow.TestArrow'"));

	if (ArrowBlueprint.Object)
	{
		ArrowObject = ArrowBlueprint.Object->GeneratedClass;
	}
}

void AWeaponBow::Fire(AActor* AOwner, FVector Position, FRotator Rotation)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Instigator = AOwner->GetInstigator();
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	AArrow* Arrow = GetWorld()->SpawnActor<AArrow>(
		ArrowObject.Get(),
		Position,
		Rotation,
		SpawnParams);

	if (Arrow == nullptr)
	{
		return;
	}

	Arrow->SetSpec(GetSpec());

	Arrow->Fire(AOwner, Rotation);
}

FString AWeaponBow::SocketName() const
{
	return FString{ TEXT("weapon2_socket") };
}

bool AWeaponBow::TwoHanded() const
{
	return true;
}

void AWeaponBow::BeginPlay()
{
	Super::BeginPlay();

	StandardAttack = UAttackWeaponBow::Create(GetOuter(), this);
}