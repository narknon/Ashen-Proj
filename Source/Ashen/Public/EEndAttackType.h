#pragma once
#include "CoreMinimal.h"
#include "EEndAttackType.generated.h"

UENUM(BlueprintType)
enum class EEndAttackType : uint8 {
    None,
    StaffAttack,
    ChargeAttack,
};

