#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HitReactForce.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FHitReactForce {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    FHitReactForce();
};

