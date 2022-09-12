#pragma once
#include "CoreMinimal.h"
#include "EMovementSpeedDescription.h"
#include "AIAlternateSpeedOption.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FAIAlternateSpeedOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementSpeedDescription MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresFirstBlood;
    
    FAIAlternateSpeedOption();
};

