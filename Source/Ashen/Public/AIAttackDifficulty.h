#pragma once
#include "CoreMinimal.h"
#include "AIAttackDifficulty.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FAIAttackDifficulty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaToBlockMod;
    
    FAIAttackDifficulty();
};

