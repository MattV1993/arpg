#include "../Public/CombatStateJump.h"
#include "../Public/CombatStateIdle.h"
#include "../Public/CombatStateStun.h"
#include "../Public/CombatStateDeath.h"

#include "../Public/CombatSystemContext.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UCombatStateJump::Init()
{
	
}

void UCombatStateJump::Action(UCombatSystemContext* Context)
{
	UCombatState::Action(Context);
	Context->GetCharacter()->Jump();
}

bool UCombatStateJump::TryTranitionTo(UClass* Type, UCombatSystemContext* Context)
{
	if (Type == StaticClass())
	{
		return false;
	}

	if (Type == UCombatStateStun::StaticClass() ||
		Type == UCombatStateDeath::StaticClass())
	{
		Context->GetCharacter()->StopJumping();
		return UCombatState::TryTranitionTo(Type, Context);
	}

	return false;
}

void UCombatStateJump::Tick(float DeltaSeconds, UCombatSystemContext* Context)
{
	bool InAir = Context->GetCharacter()->GetCharacterMovement()->IsFalling();

	if (InAir == false)
	{
		auto Creator = Context->GetRegistry().Find(UCombatStateIdle::StaticClass());

		if (Creator)
		{
			Context->GetCharacter()->StopJumping();
			Context->SetState(Creator->Create());
		}
	}
}

FString UCombatStateJump::GetName() const
{
	return FString{ TEXT("Jump") };
}
