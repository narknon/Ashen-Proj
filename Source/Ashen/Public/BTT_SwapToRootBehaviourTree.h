#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_SwapToRootBehaviourTree.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_SwapToRootBehaviourTree : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTT_SwapToRootBehaviourTree();
};

