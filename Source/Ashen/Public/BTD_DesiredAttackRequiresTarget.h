#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_DesiredAttackRequiresTarget.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_DesiredAttackRequiresTarget : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_DesiredAttackRequiresTarget();
};

