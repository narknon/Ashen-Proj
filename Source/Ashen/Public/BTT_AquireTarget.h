#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_AquireTarget.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_AquireTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTT_AquireTarget();
};

