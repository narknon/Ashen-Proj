#pragma once
#include "CoreMinimal.h"
#include "EGameEventType.generated.h"

UENUM(BlueprintType)
enum class EGameEventType : uint8 {
    SecretFoundTogether,
    ZoneFoundTogether,
    CooperativeDoorOpen,
    LockedDoorOpen,
};

