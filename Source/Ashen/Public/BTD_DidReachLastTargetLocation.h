#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_DidReachLastTargetLocation.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_DidReachLastTargetLocation : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WithinRange;
    
    UBTD_DidReachLastTargetLocation();
};

