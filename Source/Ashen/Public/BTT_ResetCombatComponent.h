#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_ResetCombatComponent.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTT_ResetCombatComponent : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTT_ResetCombatComponent();
};

