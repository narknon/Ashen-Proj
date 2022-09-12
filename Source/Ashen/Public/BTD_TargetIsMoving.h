#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_TargetIsMoving.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_TargetIsMoving : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTowardsUs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAwayFromUs;
    
    UBTD_TargetIsMoving();
};

