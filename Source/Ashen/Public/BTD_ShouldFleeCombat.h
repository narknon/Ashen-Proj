#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_ShouldFleeCombat.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_ShouldFleeCombat : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_ShouldFleeCombat();
};

