#pragma once
#include "CoreMinimal.h"
#include "EKeyboardLayout.generated.h"

UENUM(BlueprintType)
enum class EKeyboardLayout : uint8 {
    STANDARD_QWERTY,
    AZERTY,
    Dvorak,
    _Max,
};

