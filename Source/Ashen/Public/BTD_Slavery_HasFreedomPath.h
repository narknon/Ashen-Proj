#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_Slavery_HasFreedomPath.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_Slavery_HasFreedomPath : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_Slavery_HasFreedomPath();
};

