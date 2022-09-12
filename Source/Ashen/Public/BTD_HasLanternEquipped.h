#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_HasLanternEquipped.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_HasLanternEquipped : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_HasLanternEquipped();
};

