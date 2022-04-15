#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Team.generated.h"

UCLASS(Blueprintable)
class ARPG_API UTeam : public UObject
{
	GENERATED_BODY()

public:

	bool CanAttack(const UTeam* Other) const;

	UFUNCTION(BlueprintCallable)
	void SetName(FName Name);

	UFUNCTION(BlueprintCallable)
		FName GetName() const;

	UPROPERTY(EditDefaultsOnly)
		FName TeamName;

};