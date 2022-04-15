#include "../Public/CombatStateStun.h"
#include "../Public/CombatStateIdle.h"
#include "../Public/CombatSystemContext.h"

#include "Kismet/KismetMathLibrary.h"

#include "GameFramework/Character.h"

void UCombatStateStun::Init(UAnimMontage* StunMontageF, UAnimMontage* StunMontageB, UAnimMontage* StunMontageL, UAnimMontage* StunMontageR)
{
	OwnerStunMontageF = StunMontageF;
	OwnerStunMontageB = StunMontageB;
	OwnerStunMontageL = StunMontageL;
	OwnerStunMontageR = StunMontageR;
}

void UCombatStateStun::Action(UCombatSystemContext* Context)
{
	UCombatState::Action(Context);

	UAnimMontage* Anim = OwnerStunMontageF;
	/*FVector HitLocation = Context->GetLastHit().Location;
	FVector ActorLocation = Context->GetCharacter()->GetActorLocation();
	FRotator ActorDirection = Context->GetCharacter()->GetActorRotation();


	FRotator HitRotation = UKismetMathLibrary::MakeRotFromX(Context->GetLastHit().Normal);
	float Rot = FMath::Abs(HitRotation.Yaw);

	if (Rot > 315 && Rot < 45)
	{
		Anim = OwnerStunMontageF;
	}
	else if (Rot > 135 && Rot < 225)
	{
		Anim = OwnerStunMontageB;
	}
	else if (Rot > 225 && Rot < 315)
	{
		Anim = OwnerStunMontageL;
	}
	else if (Rot > 45 && Rot < 135)
	{
		Anim = OwnerStunMontageR;
	}*/

	Context->GetCharacter()->GetMesh()->GetAnimInstance()->Montage_Play(Anim);

	FTimerDelegate StunFinishedDel;
	StunFinishedDel.BindUFunction(this, FName("StunFinished"), Context);

	GetWorld()->GetTimerManager().SetTimer(
		StunFinishedTimer,
		StunFinishedDel,
		0.5,
		false);
}

bool UCombatStateStun::TryTranitionTo(UClass* Type, UCombatSystemContext* Context)
{
	if (Type != StaticClass())
	{
		return false;
	}

	if (StunFinishedTimer.IsValid())
	{
		GetWorld()->GetTimerManager().ClearTimer(StunFinishedTimer);
	}

	return UCombatState::TryTranitionTo(Type, Context);
}

void UCombatStateStun::StunFinished(UCombatSystemContext* Context)
{
	auto Creator = Context->GetRegistry().Find(UCombatStateIdle::StaticClass());

	if (Creator)
	{
		Context->SetState(Creator->Create());
	}
}

FString UCombatStateStun::GetName() const
{
	return FString{ TEXT("Stun") };
}
