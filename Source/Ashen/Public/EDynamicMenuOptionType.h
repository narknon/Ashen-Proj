#pragma once
#include "CoreMinimal.h"
#include "EDynamicMenuOptionType.generated.h"

UENUM(BlueprintType)
enum class EDynamicMenuOptionType : uint8 {
    None,
    Standard,
    CheckBox,
    Slider,
    TextSelector,
    NumberSelector,
    RebindingSelector,
    _Max,
};

