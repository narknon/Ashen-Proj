#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_TargetIsInsideMinRange.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_TargetIsInsideMinRange : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_TargetIsInsideMinRange();
};

