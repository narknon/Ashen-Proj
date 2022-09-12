#pragma once
#include "CoreMinimal.h"
#include "EInputContext.generated.h"

UENUM(BlueprintType)
enum class EInputContext : uint8 {
    NotYetSet,
    KeyboardMouse,
    Gamepad,
};

