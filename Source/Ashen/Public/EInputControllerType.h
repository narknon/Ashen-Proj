#pragma once
#include "CoreMinimal.h"
#include "EInputControllerType.generated.h"

UENUM(BlueprintType)
enum class EInputControllerType : uint8 {
    None,
    KeyboardMouse,
    Gamepad,
    _Max,
};

