#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_WantsEquipShield.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_WantsEquipShield : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_WantsEquipShield();
};

