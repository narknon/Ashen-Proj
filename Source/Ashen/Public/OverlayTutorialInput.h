#pragma once
#include "CoreMinimal.h"
#include "TutorialQuery.h"
#include "EInputEventNames.h"
#include "OverlayTutorialInput.generated.h"

USTRUCT(BlueprintType)
struct FOverlayTutorialInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInputEventNames> ButtonsToHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PrimaryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SecoundaryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTutorialQuery> Overrides;
    
    ASHEN_API FOverlayTutorialInput();
};

