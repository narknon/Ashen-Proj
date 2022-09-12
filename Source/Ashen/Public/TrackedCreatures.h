#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TrackedCreatures.generated.h"

USTRUCT(BlueprintType)
struct FTrackedCreatures {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> Creatures;
    
    ASHEN_API FTrackedCreatures();
};

