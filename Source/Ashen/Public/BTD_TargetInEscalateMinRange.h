#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_TargetInEscalateMinRange.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_TargetInEscalateMinRange : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_TargetInEscalateMinRange();
};

