#pragma once
#include "CoreMinimal.h"
#include "BTT_AshenPathTo.h"
#include "BTT_Challenge_MoveToIntercept.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_Challenge_MoveToIntercept : public UBTT_AshenPathTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateTargetLocationOnTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTargetLocationOnTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTargetLocationOnTickRange;
    
    UBTT_Challenge_MoveToIntercept();
};

