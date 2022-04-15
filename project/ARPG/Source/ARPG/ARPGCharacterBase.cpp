#include "ARPGCharacterBase.h"

#include "CombatSystem/Public/CombatSystemContext.h"

#include "CombatSystem/Public/CombatState.h"
#include "CombatSystem/Public/CombatStateIdle.h"
#include "CombatSystem/Public/CombatStateAttack.h"
#include "CombatSystem/Public/CombatStateAttackHeavy.h"
#include "CombatSystem/Public/CombatStateBlock.h"
#include "CombatSystem/Public/CombatStateDeath.h"
#include "CombatSystem/Public/CombatStateJump.h"
#include "CombatSystem/Public/CombatStateDodge.h"

#include "Loadout.h"
#include "Weapon.h"
#include "Shield.h"
#include "Armour.h"
#include "Attack/Public/AttackWeapon.h"
#include "WeaponBow.h"
#include "DummyArrow.h"
#include "Inventory.h"
#include "InventoryItem.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

#include "Kismet/GameplayStatics.h"

AARPGCharacterBase::AARPGCharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 250.f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;

	ZoomCameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("ZoomCameraBoom"));
	ZoomCameraBoom->SetupAttachment(RootComponent);
	ZoomCameraBoom->TargetArmLength = 50.f;
	ZoomCameraBoom->bUsePawnControlRotation = true;

	ZoomCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ZoomCamera"));
	ZoomCamera->SetupAttachment(ZoomCameraBoom);
	ZoomCamera->bUsePawnControlRotation = true;

	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = false; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	GetMesh()->OnComponentBeginOverlap.AddDynamic(this, &AARPGCharacterBase::BeginOverlap);
	GetMesh()->OnComponentEndOverlap.AddDynamic(this, &AARPGCharacterBase::EndOverlap);

	static ConstructorHelpers::FObjectFinder<UBlueprint> SwordBlueprint(TEXT("Blueprint'/Game/ThirdPersonCPP/Blueprints/TestSword.TestSword'"));

	if (SwordBlueprint.Object)
	{
		SwordObject = SwordBlueprint.Object->GeneratedClass;
	}

	static ConstructorHelpers::FObjectFinder<UBlueprint> BowBlueprint(TEXT("Blueprint'/Game/ThirdPersonCPP/Blueprints/TestBow.TestBow'"));

	if (BowBlueprint.Object)
	{
		BowObject = BowBlueprint.Object->GeneratedClass;
	}

	static ConstructorHelpers::FObjectFinder<UBlueprint> ShieldBlueprint(TEXT("Blueprint'/Game/ThirdPersonCPP/Blueprints/TestShield.TestShield'"));

	if (ShieldBlueprint.Object)
	{
		ShieldObject = ShieldBlueprint.Object->GeneratedClass;
	}

	static ConstructorHelpers::FObjectFinder<UBlueprint> ArrowBlueprint(TEXT("Blueprint'/Game/ThirdPersonCPP/Blueprints/TestDummyArrow.TestDummyArrow'"));

	if (ArrowBlueprint.Object)
	{
		ArrowObject = ArrowBlueprint.Object->GeneratedClass;
	}

	static ConstructorHelpers::FObjectFinder<UBlueprint> ChestArmourBlueprint(TEXT("Blueprint'/Game/ThirdPersonCPP/Blueprints/TestChest.TestChest'"));

	if (ChestArmourBlueprint.Object)
	{
		ChestObject = ChestArmourBlueprint.Object->GeneratedClass;
	}

}

void AARPGCharacterBase::BeginPlay()
{
	Super::BeginPlay();

	BlockPressed = false;

	StunAnims.StunMontageF = LoadObject<UAnimMontage>(NULL, TEXT("AnimMontage'/Game/Animations/StunMontageF.StunMontageF'"));
	StunAnims.StunMontageB = LoadObject<UAnimMontage>(NULL, TEXT("AnimMontage'/Game/Animations/StunMontageB.StunMontageB'"));
	StunAnims.StunMontageL = LoadObject<UAnimMontage>(NULL, TEXT("AnimMontage'/Game/Animations/StunMontageL.StunMontageL'"));
	StunAnims.StunMontageR = LoadObject<UAnimMontage>(NULL, TEXT("AnimMontage'/Game/Animations/StunMontageR.StunMontageR'"));

	Loadout = ULoadout::Create(GetOuter(), GetMesh());
	Inventory = NewObject<UInventory>(GetOuter());

	Team = NewObject<UTeam>(GetOuter());

	StateRegistry<UCombatState> Registry;

	Registry.Register(MakeUnique<StateCreator<UCombatStateIdle, UCombatState>>(GetOuter()));
	Registry.Register(MakeUnique<StateCreator<UCombatStateDodge, UCombatState>>(GetOuter()));
	Registry.Register(MakeUnique<StateCreator<UCombatStateAttack, UCombatState>>(GetOuter(),
		[this](UCombatStateAttack* State)
		{
			State->Init(Loadout);
		}));
	Registry.Register(MakeUnique<StateCreator<UCombatStateAttackHeavy, UCombatState>>(GetOuter(),
		[this](UCombatStateAttackHeavy* State)
		{
			State->Init(Loadout);
		}));
	Registry.Register(MakeUnique<StateCreator<UCombatStateBlock, UCombatState>>(GetOuter(),
		[this](UCombatStateBlock* State)
		{
			State->Init(Loadout);
		}));
	Registry.Register(MakeUnique<StateCreator<UCombatStateDeath, UCombatState>>(GetOuter()));
	Registry.Register(MakeUnique<StateCreator<UCombatStateStun, UCombatState>>(GetOuter(),
		[this](UCombatStateStun* State)
		{
			State->Init(StunAnims.StunMontageF, StunAnims.StunMontageB, StunAnims.StunMontageL, StunAnims.StunMontageR);
		}));
	Registry.Register(MakeUnique<StateCreator<UCombatStateJump, UCombatState>>(GetOuter()));

	CombatSystem = UCombatSystemContext::Create(GetOuter(), MoveTemp(Registry), this, this);
	CombatSystem->SetState(CombatSystem->GetRegistry().Find(UCombatStateIdle::StaticClass())->Create());

	FActorSpawnParameters SpawnParams;
	SpawnParams.Instigator = GetInstigator();
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	AWeapon* BowWeapon = GetWorld()->SpawnActor<AWeapon>(
		BowObject.Get(),
		GetMesh()->GetComponentLocation(),
		GetMesh()->GetComponentRotation(),
		SpawnParams);

	AWeapon* SwordWeapon = GetWorld()->SpawnActor<AWeapon>(
		SwordObject.Get(),
		GetMesh()->GetComponentLocation(),
		GetMesh()->GetComponentRotation(),
		SpawnParams);

	AShield* StartShield = GetWorld()->SpawnActor<AShield>(
		ShieldObject.Get(),
		GetMesh()->GetComponentLocation(),
		GetMesh()->GetComponentRotation(),
		SpawnParams);

	/*AArmour* StartChest = GetWorld()->SpawnActor<AArmour>(
		ChestObject.Get(),
		GetMesh()->GetComponentLocation(),
		GetMesh()->GetComponentRotation(),
		SpawnParams);*/

	Loadout->Equip(StartShield);
	Loadout->Equip(BowWeapon);
	Loadout->Equip(SwordWeapon);
	//Loadout->Equip(StartChest);

	Health = 100.f;
}

void AARPGCharacterBase::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, FMath::Max(Value, -0.75f));
	}
}

void AARPGCharacterBase::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, FMath::Min(FMath::Max(Value, -0.85f), 0.85f));
	}
}

void AARPGCharacterBase::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AARPGCharacterBase::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AARPGCharacterBase::AttackPressed()
{
	StartAttackPressed = FDateTime::UtcNow();
}

void AARPGCharacterBase::AttackReleased()
{
	FTimespan Diff = FDateTime::UtcNow() - StartAttackPressed;
	float DiffMilliseconds = Diff.GetTotalMilliseconds();

	if (DiffMilliseconds < 500)
	{
		CombatSystem->SetIntent(UCombatStateAttack::StaticClass());
	}
	else
	{
		CombatSystem->SetIntent(UCombatStateAttackHeavy::StaticClass());
	}
}

void AARPGCharacterBase::StartBlock()
{
	BlockPressed = true;
}

void AARPGCharacterBase::StopBlock()
{
	BlockPressed = false;
}

void AARPGCharacterBase::OnHit(const FHitSpec& Hit)
{
	CombatSystem->ApplyHit(Hit);
}

bool AARPGCharacterBase::CanHit(const UTeam* Other) const
{
	return Team->CanAttack(Other);
}

void AARPGCharacterBase::OnDamageReceived(const FDamageSpec& Damage)
{
	FDamageSpec ResolvedDamage = Loadout->ResolveIncomingDamageSpec(Damage);

	Health -= ResolvedDamage.Damage;

	if (Health > 0)
	{
		int32 Rand = FMath::RandRange(1, 100);

		if (Rand <= Damage.StunChance)
		{
			CombatSystem->SetIntent(UCombatStateStun::StaticClass());
		}
	}
	else
	{
		CombatSystem->SetIntent(UCombatStateDeath::StaticClass());
	}
}

void AARPGCharacterBase::GiveHit()
{
}

void AARPGCharacterBase::SwapWeapons()
{
	Loadout->SwapWeapons();
}

void AARPGCharacterBase::TryDodge()
{
	CombatSystem->SetIntent(UCombatStateDodge::StaticClass());
}

void AARPGCharacterBase::ToggleCasting()
{
	Loadout->ToggleCasting();
}

bool AARPGCharacterBase::ShouldRotate()
{
	return true;
}

void AARPGCharacterBase::RotateTowardController()
{
	FRotator ControllerRot = GetControlRotation();
	ControllerRot.Normalize();

	FRotator ActorRotation = GetActorRotation();
	ActorRotation.Normalize();

	FRotator DeltaAngle = FMath::RInterpConstantTo(
		{ 0, ActorRotation.Yaw, 0 },
		{ 0, ControllerRot.Yaw, 0 },
		GetWorld()->GetDeltaSeconds(),
		500.f);

	SetActorRotation(DeltaAngle);
}

void AARPGCharacterBase::PickupItem()
{
	if (OverlappedItem == nullptr)
	{
		return;
	}

	Inventory->AddItem(UInventoryItem::Create(GetOuter(), OverlappedItem->StaticClass()));
	OverlappedItem->ConditionalBeginDestroy();
	OverlappedItem = nullptr;

	HideShowItem();
}

void AARPGCharacterBase::DisplayShowItem()
{

}

void AARPGCharacterBase::HideShowItem()
{

}

void AARPGCharacterBase::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (Cast<AItem>(OtherActor) == nullptr)
	{
		return;
	}

	DisplayShowItem();

	OverlappedItem = Cast<AItem>(OtherActor);
}

void AARPGCharacterBase::EndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor != OverlappedItem)
	{
		return;
	}

	HideShowItem();
	OverlappedItem = nullptr;
}

void AARPGCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (ShouldRotate())
	{
		RotateTowardController();
	}

	CombatSystem->Tick(DeltaTime);

	if (BlockPressed)
	{
		auto Bow = Cast<AWeaponBow>(Loadout->Weapon);

		if (Bow == nullptr)
		{
			if (CombatSystem->GetCurrentState()->GetName() == "Idle")
			{
				CombatSystem->SetIntent(UCombatStateBlock::StaticClass());
			}
		}
	}
	else if (CombatSystem->GetCurrentState()->GetName() == "Block")
	{
		CombatSystem->SetIntent(UCombatStateIdle::StaticClass());
	}
}

void AARPGCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AARPGCharacterBase::TryJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AARPGCharacterBase::StopJumping);

	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &AARPGCharacterBase::AttackPressed);
	PlayerInputComponent->BindAction("Attack", IE_Released, this, &AARPGCharacterBase::AttackReleased);

	PlayerInputComponent->BindAction("PickupItem", IE_Released, this, &AARPGCharacterBase::PickupItem);

	PlayerInputComponent->BindAction("Block", IE_Pressed, this, &AARPGCharacterBase::StartBlock);
	PlayerInputComponent->BindAction("Block", IE_Released, this, &AARPGCharacterBase::StopBlock);

	PlayerInputComponent->BindAction("Dodge", IE_Pressed, this, &AARPGCharacterBase::TryDodge);

	PlayerInputComponent->BindAction("ChangeWeaponUp", IE_Pressed, this, &AARPGCharacterBase::SwapWeapons);
	PlayerInputComponent->BindAction("ChangeWeaponDown", IE_Pressed, this, &AARPGCharacterBase::SwapWeapons);

	PlayerInputComponent->BindAction("ToggleMagic", IE_Pressed, this, &AARPGCharacterBase::ToggleCasting);

	PlayerInputComponent->BindAxis("MoveForward", this, &AARPGCharacterBase::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AARPGCharacterBase::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AARPGCharacterBase::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AARPGCharacterBase::LookUpAtRate);
}

void AARPGCharacterBase::DrawArrow()
{
	AWeapon* CurrentWeapon = Loadout->Weapon;
	AWeaponBow* Bow = Cast<AWeaponBow>(CurrentWeapon);

	if (Bow == nullptr)
	{
		return;
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.Instigator = GetInstigator();
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	ADummyArrow* DummyArrow = GetWorld()->SpawnActor<ADummyArrow>(
		ArrowObject.Get(),
		GetMesh()->GetComponentLocation(),
		GetMesh()->GetComponentRotation(),
		SpawnParams);

	if (DummyArrow == nullptr)
	{
		return;
	}

	DummyArrow->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName(TEXT("arrow_socket")));
	CurrentDummyArrow = DummyArrow;
}

void AARPGCharacterBase::FireArrow()
{
	DestructArrow();

	AWeapon* CurrentWeapon = Loadout->Weapon;
	AWeaponBow* Bow = Cast<AWeaponBow>(CurrentWeapon);

	if (Bow == nullptr)
	{
		return;
	}

	FRotator Direction = ZoomCamera->GetComponentRotation();
	Direction.Normalize();

	Bow->Fire(this, ZoomCamera->GetComponentLocation() + (Direction.Vector() * 100), ZoomCamera->GetComponentRotation());
}

void AARPGCharacterBase::DestructArrow()
{
	if (CurrentDummyArrow == nullptr)
	{
		return;
	}

	CurrentDummyArrow->ConditionalBeginDestroy();
	CurrentDummyArrow = nullptr;
}

void AARPGCharacterBase::TryJump()
{
	CombatSystem->SetIntent(UCombatStateJump::StaticClass());
}

void AARPGCharacterBase::StopJumping()
{
	Super::StopJumping();
}

FString AARPGCharacterBase::GetCurrentStateString() const
{
	if (CombatSystem && CombatSystem->GetCurrentState())
	{
		return CombatSystem->GetCurrentState()->GetName();
	}
	else
	{
		return FString{};
	}
}

