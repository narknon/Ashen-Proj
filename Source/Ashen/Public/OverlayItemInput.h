#pragma once
#include "CoreMinimal.h"
#include "OverlayItemInput.generated.h"

class UItemBase;

USTRUCT(BlueprintType)
struct FOverlayItemInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Addition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* ItemRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    ASHEN_API FOverlayItemInput();
};

