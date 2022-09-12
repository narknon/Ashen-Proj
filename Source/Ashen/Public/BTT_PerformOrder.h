#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_PerformOrder.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_PerformOrder : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTT_PerformOrder();
};

