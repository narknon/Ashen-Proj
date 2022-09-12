#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_SwapToCombatBehaviourTree.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_SwapToCombatBehaviourTree : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTT_SwapToCombatBehaviourTree();
};

