#pragma once
#include "CoreMinimal.h"
#include "EAccelerationDescription.generated.h"

UENUM(BlueprintType)
enum class EAccelerationDescription : uint8 {
    ACCEL_None,
    ACCEL_Accelerating,
    ACCEL_Deccelerating,
    ACCEL_Neutral,
    ACCEL_MAX UMETA(Hidden),
};

