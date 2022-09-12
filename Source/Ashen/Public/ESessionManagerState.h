#pragma once
#include "CoreMinimal.h"
#include "ESessionManagerState.generated.h"

UENUM(BlueprintType)
enum class ESessionManagerState : uint8 {
    None,
    CreatingSession,
    WaitingSessionJoin,
    JoiningSession,
    CreatingAssociation,
    Ready,
    LeavingSessionQueued,
    LeavingSession,
    Failure,
};

