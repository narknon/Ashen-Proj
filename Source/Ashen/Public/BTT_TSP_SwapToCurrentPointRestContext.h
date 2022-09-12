#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_TSP_SwapToCurrentPointRestContext.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_TSP_SwapToCurrentPointRestContext : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTT_TSP_SwapToCurrentPointRestContext();
};

