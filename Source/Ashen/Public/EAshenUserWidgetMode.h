#pragma once
#include "CoreMinimal.h"
#include "EAshenUserWidgetMode.generated.h"

UENUM(BlueprintType)
enum class EAshenUserWidgetMode : uint8 {
    None,
    ChildWidget,
    ScreenWidget,
};

