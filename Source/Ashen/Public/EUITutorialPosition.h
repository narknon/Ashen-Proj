#pragma once
#include "CoreMinimal.h"
#include "EUITutorialPosition.generated.h"

UENUM(BlueprintType)
enum class EUITutorialPosition : uint8 {
    Default,
    Center,
    CenterOnButton,
    Top,
    Max,
};

