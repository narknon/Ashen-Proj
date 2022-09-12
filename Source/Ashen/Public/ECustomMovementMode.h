#pragma once
#include "CoreMinimal.h"
#include "ECustomMovementMode.generated.h"

UENUM(BlueprintType)
enum class ECustomMovementMode : uint8 {
    CUSTOM_None,
    CUSTOM_Climbing,
    CUSTOM_Jumping,
    CUSTOM_Sliding,
    CUSTOM_Sprinting,
    CUSTOM_Ragdoll,
    CUSTOM_MAX UMETA(Hidden),
};

