#pragma once
#include "CoreMinimal.h"
#include "TierModifier.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FTierModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CritChanceMultiplier;
    
    FTierModifier();
};

