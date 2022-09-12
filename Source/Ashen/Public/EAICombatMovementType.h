#pragma once
#include "CoreMinimal.h"
#include "EAICombatMovementType.generated.h"

UENUM(BlueprintType)
enum class EAICombatMovementType : uint8 {
    None,
    MoveToAttackRange,
    MoveToEncounter,
    MoveToFlankWhenClose,
    MoveToFlankWhenFar,
    MoveToRecoverWhenClose,
    MoveToRecoverWhenFar,
    MoveToDisengage,
    Scag_ScuttleBack,
    Scag_ScuttleStrafe,
    Scag_ScuttleForward,
    AshWraith_FlyToPossess,
    AshWraith_LandNearTarget,
};

