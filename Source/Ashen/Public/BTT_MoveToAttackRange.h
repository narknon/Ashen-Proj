#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenPathTo.h"
#include "UObject/NoExportTypes.h"
#include "BTT_MoveToAttackRange.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_MoveToAttackRange : public UBTT_AshenPathTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PredictTargetPositionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfAngleFromTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RangeShrink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateTargetLocationOnTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTargetLocationOnTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTargetLocationOnTickRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestPathToTargetCurveLimit;
    
    UBTT_MoveToAttackRange();
};

