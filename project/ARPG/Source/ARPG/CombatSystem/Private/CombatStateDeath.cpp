#include "../Public/CombatStateDeath.h"
#include "../Public/CombatSystemContext.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"

void UCombatStateDeath::Action(UCombatSystemContext* Context)
{
	UCombatState::Action(Context);

	Context->GetCharacter()->GetCharacterMovement()->DisableMovement();
	Context->GetCharacter()->GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	Context->GetCharacter()->GetMesh()->SetAllBodiesSimulatePhysics(true);
	Context->GetCharacter()->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

bool UCombatStateDeath::TryTranitionTo(UClass* Type, UCombatSystemContext* Context)
{
	return false;
}

FString UCombatStateDeath::GetName() const
{
	return FString{ TEXT("Death") };
}