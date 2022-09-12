#pragma once
#include "CoreMinimal.h"
#include "IngredientDetails.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct ASHEN_API FIngredientDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* Icon;
    
    FIngredientDetails();
};

