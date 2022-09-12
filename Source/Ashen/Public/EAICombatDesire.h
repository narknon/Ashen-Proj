#pragma once
#include "CoreMinimal.h"
#include "EAICombatDesire.generated.h"

UENUM(BlueprintType)
enum class EAICombatDesire : uint8 {
    None,
    MeleeAttack,
    RangedAttack,
    Recover,
    Flank,
    Flee,
    Total,
};

