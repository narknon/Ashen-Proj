#pragma once
#include "CoreMinimal.h"
#include "EInputEventNames.h"
#include "TutorialData.generated.h"

USTRUCT(BlueprintType)
struct ASHEN_API FTutorialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInputEventNames> ButtonsToHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TutorialText;
    
    FTutorialData();
};

