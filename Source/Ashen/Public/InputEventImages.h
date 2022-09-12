#pragma once
#include "CoreMinimal.h"
#include "InputKeyImage.h"
#include "InputEventImages.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FInputEventImages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputKeyImage> EventImageOptions;
    
    FInputEventImages();
};

