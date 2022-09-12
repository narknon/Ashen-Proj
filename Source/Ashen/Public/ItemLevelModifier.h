#pragma once
#include "CoreMinimal.h"
#include "ItemLevelModifier.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FItemLevelModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMultiplierPerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseDamageMultiplierPerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CritChanceMultiplierPerLevel;
    
    FItemLevelModifier();
};

