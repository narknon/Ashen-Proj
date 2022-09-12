#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_MatriarchHasTargetOverride.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_MatriarchHasTargetOverride : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_MatriarchHasTargetOverride();
};

