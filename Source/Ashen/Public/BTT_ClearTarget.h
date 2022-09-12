#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_ClearTarget.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_ClearTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTT_ClearTarget();
};

