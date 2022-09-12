#pragma once
#include "CoreMinimal.h"
#include "EEngagedInActivity.generated.h"

UENUM(BlueprintType)
enum class EEngagedInActivity : uint8 {
    None,
    CombatWithLocalHero,
    IsOffTimeSyncedPath,
    IsMoving,
};

