#pragma once
#include "CoreMinimal.h"
#include "EUIRebindingButtonTypes.generated.h"

UENUM(BlueprintType)
enum class EUIRebindingButtonTypes : uint8 {
    KeyBinding,
    AxisBinding,
    ApplySettings,
    ResetAll,
};

