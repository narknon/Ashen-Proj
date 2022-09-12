#pragma once
#include "CoreMinimal.h"
#include "ENpcUiAlertState.generated.h"

UENUM(BlueprintType)
enum class ENpcUiAlertState : uint8 {
    Default,
    RequestingClimb,
    CallingOut,
    RequestingDoor,
    Injured,
    Pinned,
};

