#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MapTexture_Additional.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct ASHEN_API FMapTexture_Additional {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TextureRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MaxValue;
    
    FMapTexture_Additional();
};

