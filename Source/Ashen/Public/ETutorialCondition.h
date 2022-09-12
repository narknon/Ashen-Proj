#pragma once
#include "CoreMinimal.h"
#include "ETutorialCondition.generated.h"

UENUM(BlueprintType)
enum class ETutorialCondition : uint8 {
    HasMovedCamera,
    HasMovedPlayer,
    HasDrawnWeapon,
    HasAttacked,
    HasEvaded,
    HasSprinted,
    HasLockedOn,
    HasEaten,
    HasLantern,
    HasDrawnLantern,
    HasActivatedSaveStone,
};

