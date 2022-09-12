#pragma once
#include "CoreMinimal.h"
#include "EMovementRelativeRotation.generated.h"

UENUM(BlueprintType)
enum class EMovementRelativeRotation : uint8 {
    ROT_None,
    ROT_Left90,
    ROT_Left180,
    ROT_Right90,
    ROT_Right180,
    ROT_Max,
};

