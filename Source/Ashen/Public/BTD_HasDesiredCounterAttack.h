#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_HasDesiredCounterAttack.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_HasDesiredCounterAttack : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_HasDesiredCounterAttack();
};

