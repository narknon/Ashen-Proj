#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_ShouldHolsterWeaponForIdle.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_ShouldHolsterWeaponForIdle : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_ShouldHolsterWeaponForIdle();
};

