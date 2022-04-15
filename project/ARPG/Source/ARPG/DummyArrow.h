
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DummyArrow.generated.h"

UCLASS()
class ARPG_API ADummyArrow : public AActor
{
	GENERATED_BODY()
	
public:	

	ADummyArrow();

protected:

	virtual void BeginPlay() override;

private:

	UPROPERTY(EditDefaultsOnly)
		UStaticMeshComponent* Feather;

	UPROPERTY(EditDefaultsOnly)
		UStaticMeshComponent* Shaft;

	UPROPERTY(EditDefaultsOnly)
		UStaticMeshComponent* Head;
};
