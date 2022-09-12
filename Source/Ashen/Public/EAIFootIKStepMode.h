#pragma once
#include "CoreMinimal.h"
#include "EAIFootIKStepMode.generated.h"

UENUM(BlueprintType)
enum class EAIFootIKStepMode : uint8 {
    None,
    GoingDown,
    GoingUp,
};

