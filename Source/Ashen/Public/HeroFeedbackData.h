#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFeedbackInput.h"
#include "HeroFeedbackData.generated.h"

class UCurveVector;
class UForceFeedbackEffect;

USTRUCT(BlueprintType)
struct ASHEN_API FHeroFeedbackData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFeedbackInput FeedbackRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* CameraShakeCurve;
    
    FHeroFeedbackData();
};

