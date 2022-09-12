#pragma once
#include "CoreMinimal.h"
#include "EFeedbackDirection.generated.h"

UENUM(BlueprintType)
enum class EFeedbackDirection : uint8 {
    None,
    Left,
    Right,
    Forward,
    Backward,
};

