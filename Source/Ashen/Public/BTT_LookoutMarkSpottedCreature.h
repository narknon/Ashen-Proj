#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_LookoutMarkSpottedCreature.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_LookoutMarkSpottedCreature : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTT_LookoutMarkSpottedCreature();
};

