#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_TargetRangeAttackedUs.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_TargetRangeAttackedUs : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FromLessThanTimeAgo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FromMoreThanTimeAgo;
    
    UBTD_TargetRangeAttackedUs();
};

