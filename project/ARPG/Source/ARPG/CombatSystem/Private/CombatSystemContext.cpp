#include "../Public/CombatSystemContext.h"

#include "../../HitReceiver.h"

void UCombatSystemContext::SetState(UCombatState* State)
{
	CurrentState = State;
}

void UCombatSystemContext::ApplyHit(const FHitSpec& Params)
{
	LastHit = Params;
	CurrentState->ApplyHit(Params, this);
}

TScriptInterface<IDamageReceiver> UCombatSystemContext::GetDamageReceiver()
{
	return DamageReceiver;
}

ACharacter* UCombatSystemContext::GetCharacter()
{
	return OwningCharacter;
}

UCombatState* UCombatSystemContext::GetCurrentState() const
{
	return CurrentState;
}

const FHitSpec& UCombatSystemContext::GetLastHit() const
{
	return LastHit;
}

void UCombatSystemContext::PostInitProperties()
{
	Super::PostInitProperties();

	if (GetOuter() && GetOuter()->GetWorld())
	{
		BeginPlay();
	}
}

UCombatSystemContext* UCombatSystemContext::Create(UObject* Outer, StateRegistry<UCombatState>&& Registry, ACharacter* Character, TScriptInterface<IDamageReceiver> DamageReceiver)
{
	UCombatSystemContext* Context =  NewObject<UCombatSystemContext>(Outer);

	Context->Registry = MoveTemp(Registry);
	Context->DamageReceiver = DamageReceiver;
	Context->OwningCharacter = Character;

	return Context;
}

void UCombatSystemContext::BeginPlay()
{
	
}
