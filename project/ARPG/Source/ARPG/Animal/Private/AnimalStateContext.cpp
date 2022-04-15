#include "../Public/AnimalStateContext.h"
#include "../Public/Animal.h"

UAnimalStateContext* UAnimalStateContext::Create(UObject* Outer, StateRegistry<UAnimalState>&& Registry, AAnimal* Owner, TScriptInterface<IDamageReceiver> DamageReceiver)
{
	UAnimalStateContext* Context = NewObject<UAnimalStateContext>(Outer);
	Context->Registry = MoveTemp(Registry);
	Context->OwningAnimal = Owner;
	Context->DamageReceiver = DamageReceiver;

	return Context;
}

void UAnimalStateContext::SetState(UAnimalState* State)
{
	CurrentState = State;
}

UAnimalState* UAnimalStateContext::GetCurrentState() const
{
    return CurrentState;
}

void UAnimalStateContext::ApplyHit(const FHitSpec& Params)
{
	CurrentState->ApplyHit(Params, this);
}

TScriptInterface<IDamageReceiver> UAnimalStateContext::GetDamageReceiver()
{
	return DamageReceiver;
}

AAnimal* UAnimalStateContext::GetAnimal()
{
	return OwningAnimal;
}
