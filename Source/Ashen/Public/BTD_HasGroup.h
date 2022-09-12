#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_HasGroup.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_HasGroup : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_HasGroup();
};

