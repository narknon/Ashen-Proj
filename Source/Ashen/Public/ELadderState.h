#pragma once
#include "CoreMinimal.h"
#include "ELadderState.generated.h"

UENUM(BlueprintType)
enum class ELadderState : uint8 {
    None,
    ClimbUp,
    ClimbDown,
    MountTop,
    MountBottom,
    DismountTop,
    DismountBottom,
    ClimbIdle,
    DismountMid,
};

