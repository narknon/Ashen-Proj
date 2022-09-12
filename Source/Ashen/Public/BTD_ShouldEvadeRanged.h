#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_ShouldEvadeRanged.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_ShouldEvadeRanged : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_ShouldEvadeRanged();
};

