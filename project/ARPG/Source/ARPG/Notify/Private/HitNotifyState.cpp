#include "../Public/HitNotifyState.h"
#include "GameFramework/Character.h"

#include "Engine/SkeletalMeshSocket.h"
#include "Kismet/KismetSystemLibrary.h"

#include "../../ARPGCharacter.h"
#include "../../Loadout.h"

void UHitNotifyState::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime)
{
	if (MeshComp == nullptr || MeshComp->GetOwner() == nullptr)
	{
		return;
	}

	auto Character = Cast<AARPGCharacterBase>(MeshComp->GetOwner());

	if (Character == nullptr)
	{
		return;
	}

	FVector Start = Character->Loadout->Weapon->GetMesh()->GetSocketLocation("hit_start");
	FVector End = Character->Loadout->Weapon->GetMesh()->GetSocketLocation("hit_end");

	FHitResult Hit{ ForceInit };

	bool DidHit = UKismetSystemLibrary::SphereTraceSingle(
		Character,
		Start,
		End,
		10.0f,
		UEngineTypes::ConvertToTraceType(ECC_GameTraceChannel1),
		true,
		TArray<AActor*>{ Character },
		EDrawDebugTrace::None,
		Hit,
		true/*,
		FLinearColor::Green,
		FLinearColor::Red*/);

	if (DidHit == false || Hit.Actor == nullptr)
	{
		return;
	}

	if (AlreadyHit.Contains(Hit.Actor.Get()))
	{
		return;
	}

	AlreadyHit.Add(Hit.Actor.Get());

	IHitReceiver* Receiver = Cast<IHitReceiver>(Hit.Actor);

	if (Receiver)
	{
		if (Receiver->CanHit(Character->GetTeam()) == false)
		{
			return;
		}

		FHitSpec HitSpec;
		HitSpec.WeaponSpec = Character->Loadout->Weapon->GetSpec();
		HitSpec.Location = Hit.ImpactPoint;
		HitSpec.Normal = Hit.ImpactNormal;
		HitSpec.Sender = Character;

		Receiver->OnHit(HitSpec);
	}
}

void UHitNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	AlreadyHit.Empty();
}
