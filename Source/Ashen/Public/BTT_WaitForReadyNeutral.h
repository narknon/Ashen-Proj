#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_WaitForReadyNeutral.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_WaitForReadyNeutral : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWaitTime;
    
    UBTT_WaitForReadyNeutral();
};

