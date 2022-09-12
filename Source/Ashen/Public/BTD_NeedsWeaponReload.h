#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_NeedsWeaponReload.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_NeedsWeaponReload : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTD_NeedsWeaponReload();
};

