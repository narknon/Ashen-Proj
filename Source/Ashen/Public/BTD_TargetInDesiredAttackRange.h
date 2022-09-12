#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_TargetInDesiredAttackRange.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_TargetInDesiredAttackRange : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_TargetInDesiredAttackRange();
};

