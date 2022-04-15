#include "../Public/AnimalState.h"
#include "../Public/AnimalStateContext.h"

void UAnimalState::ApplyHit(const FHitSpec& Params, UAnimalStateContext* Context)
{
	Context->GetDamageReceiver()->OnDamageReceived(Params.WeaponSpec.Damage);
}

FString UAnimalState::GetName() const
{
	return FString{ TEXT("AnimalState") };
}