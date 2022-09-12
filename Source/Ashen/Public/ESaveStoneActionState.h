#pragma once
#include "CoreMinimal.h"
#include "ESaveStoneActionState.generated.h"

UENUM(BlueprintType)
enum class ESaveStoneActionState : uint8 {
    NotStarted,
    Interacting,
    SittingDown,
    SitLoop,
    StandingUpTriggered,
    StandingUp,
    Finished,
};

