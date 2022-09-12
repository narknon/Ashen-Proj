#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_IsCombatCapable.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_IsCombatCapable : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_IsCombatCapable();
};

