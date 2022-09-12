#pragma once
#include "CoreMinimal.h"
#include "HealthDamageThreshold.generated.h"

USTRUCT(BlueprintType)
struct FHealthDamageThreshold {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BonusDamageMultiplier;
    
    ASHEN_API FHealthDamageThreshold();
};

