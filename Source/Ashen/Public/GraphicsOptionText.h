#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GraphicsOptionText.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FGraphicsOptionText : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> TextOptions;
    
    FGraphicsOptionText();
};

