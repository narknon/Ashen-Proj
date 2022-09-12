#pragma once
#include "CoreMinimal.h"
#include "EMovementSpeedDescription.generated.h"

UENUM(BlueprintType)
enum class EMovementSpeedDescription : uint8 {
    MOVE_None,
    MOVE_Walking,
    MOVE_Running,
    MOVE_Sprinting,
    MOVE_MAX UMETA(Hidden),
};

