#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_TSP_SwapToCurrentPointRestTree.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_TSP_SwapToCurrentPointRestTree : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTT_TSP_SwapToCurrentPointRestTree();
};

