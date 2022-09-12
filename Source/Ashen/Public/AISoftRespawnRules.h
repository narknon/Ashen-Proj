#pragma once
#include "CoreMinimal.h"
#include "AISoftRespawnRules.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FAISoftRespawnRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSoftRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHeroDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRespawnFromDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRespawnFromDeathSync;
    
    FAISoftRespawnRules();
};

