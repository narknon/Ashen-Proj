#pragma once
#include "CoreMinimal.h"
#include "EMetronomeNotify.generated.h"

UENUM(BlueprintType)
enum class EMetronomeNotify : uint8 {
    All,
    Left,
    Right,
    Front,
    Back,
    Up,
    Down,
};

