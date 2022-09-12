#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_SwitchToActiveContextBT.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class ASHEN_API UBTT_SwitchToActiveContextBT : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* DefaultContextBehaviourTree;
    
    UBTT_SwitchToActiveContextBT();
};

