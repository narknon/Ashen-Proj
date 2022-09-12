#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_TargetInDesiredAttackCone.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_TargetInDesiredAttackCone : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_TargetInDesiredAttackCone();
};

