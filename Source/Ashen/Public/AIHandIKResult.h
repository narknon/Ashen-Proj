#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIHandIKResult.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FAIHandIKResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocalJointGuide;
    
    FAIHandIKResult();
};

