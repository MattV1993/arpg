#include "../Public/CombatState.h"
#include "../Public/CombatSystemContext.h"

#include "Engine/Engine.h"

void UCombatState::ApplyHit(const FHitSpec& Params, UCombatSystemContext* Context)
{
	Context->GetDamageReceiver()->OnDamageReceived(Params.WeaponSpec.Damage);
}

FString UCombatState::GetName() const
{
	return FString{ TEXT("CombatState") };
}