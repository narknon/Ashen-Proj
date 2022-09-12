#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_ElderDarkRemainingPillarCount.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_ElderDarkRemainingPillarCount : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PillarCount;
    
    UBTD_ElderDarkRemainingPillarCount();
};

