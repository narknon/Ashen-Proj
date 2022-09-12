#pragma once
#include "CoreMinimal.h"
#include "StaminaDamageThreshold.generated.h"

USTRUCT(BlueprintType)
struct FStaminaDamageThreshold {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BonusDamageMultiplier;
    
    ASHEN_API FStaminaDamageThreshold();
};

