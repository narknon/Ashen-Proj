#pragma once
#include "CoreMinimal.h"
#include "EHUDFaceButton.generated.h"

UENUM(BlueprintType)
enum class EHUDFaceButton : uint8 {
    Top,
    Bottom,
    Left,
    Right,
    Next,
    Previous,
    Start,
    Select,
};

