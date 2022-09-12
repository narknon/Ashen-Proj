#pragma once
#include "CoreMinimal.h"
#include "EInputPressType.generated.h"

UENUM(BlueprintType)
enum class EInputPressType : uint8 {
    IE_Pressed,
    IE_Released,
    IE_Repeat,
    IE_DoubleClick,
    IE_Axis,
    IE_DragStart,
    IE_DragEnd,
    IE_MAX UMETA(Hidden),
};

