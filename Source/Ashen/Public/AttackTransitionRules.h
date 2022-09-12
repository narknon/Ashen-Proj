#pragma once
#include "CoreMinimal.h"
#include "AttackTransitionRules.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FAttackTransitionRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Section;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TransitionSections;
    
    FAttackTransitionRules();
};

