#pragma once
#include "CoreMinimal.h"
#include "EControllerButtons.generated.h"

UENUM(BlueprintType)
enum class EControllerButtons : uint8 {
    None,
    A,
    B,
    X,
    Y,
    TimedOut,
};

