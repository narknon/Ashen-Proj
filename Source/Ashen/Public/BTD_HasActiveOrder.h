#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_HasActiveOrder.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_HasActiveOrder : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_HasActiveOrder();
};

