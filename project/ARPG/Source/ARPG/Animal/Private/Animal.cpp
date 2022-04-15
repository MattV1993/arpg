#include "../Public/Animal.h"

#include "../../Animal/Public/AnimalStateContext.h"
#include "../../Animal/Public/AnimalStateIdle.h"
#include "../../Animal/Public/AnimalStateWalk.h"
#include "../../Animal/Public/AnimalStateRun.h"
#include "../../Animal/Public/AnimalStateDeath.h"
#include "../../Inventory.h"
#include "../../InventoryItem.h"

AAnimal::AAnimal()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AAnimal::BeginPlay()
{
	Super::BeginPlay();

	Inventory = NewObject<UInventory>(GetOuter());
	Inventory->AddItem(UInventoryItem::Create(GetOuter(), MeatClass));

	StateRegistry<UAnimalState> AnimalRegistry;

	AnimalRegistry.Register(MakeUnique<StateCreator<UAnimalStateIdle, UAnimalState>>(GetOuter()));
	AnimalRegistry.Register(MakeUnique<StateCreator<UAnimalStateWalk, UAnimalState>>(GetOuter()));
	AnimalRegistry.Register(MakeUnique<StateCreator<UAnimalStateRun, UAnimalState>>(GetOuter()));
	AnimalRegistry.Register(MakeUnique<StateCreator<UAnimalStateDeath, UAnimalState>>(GetOuter()));

	AnimalState = UAnimalStateContext::Create(GetOuter(), MoveTemp(AnimalRegistry), this, this);
	AnimalState->SetState(AnimalState->GetRegistry().Find(UAnimalStateIdle::StaticClass())->Create());
}

void AAnimal::OnHit(const FHitSpec& Hit)
{
	AnimalState->ApplyHit(Hit);
}

bool AAnimal::CanHit(const UTeam* Other) const
{
	return true;
}

void AAnimal::OnDamageReceived(const FDamageSpec& Damage)
{
	AnimalState->SetIntent(UAnimalStateDeath::StaticClass());

	auto Items = Inventory->GetItems();

	for (auto Item : Items)
	{
		if (Item == nullptr)
		{
			continue;
		}

		auto Spawned = Item->SpawnItem();
		Spawned->EnablePickupSphere();
		Spawned->SetActorLocation(GetActorLocation());
	}
}

void AAnimal::StartRun()
{
	Running = true;
}

void AAnimal::StopRun()
{
	Running = false;
}

void AAnimal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto StateName = AnimalState->GetCurrentState()->GetName();

	if (!(GetVelocity().IsZero()) && Running == true && StateName != "Run")
	{
		AnimalState->SetIntent(UAnimalStateRun::StaticClass());
	}

	if (Running)
	{
		return;
	}

	if (!(GetVelocity().IsZero()) && StateName != "Walk")
	{
		AnimalState->SetIntent(UAnimalStateWalk::StaticClass());
	}
	else if (GetVelocity().IsZero() && StateName != "Idle")
	{
		AnimalState->SetIntent(UAnimalStateIdle::StaticClass());
	}

}

void AAnimal::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FString AAnimal::GetCurrentStateString() const
{
	if (AnimalState && AnimalState->GetCurrentState())
	{
		return AnimalState->GetCurrentState()->GetName();
	}
	else
	{
		return FString{};
	}
}