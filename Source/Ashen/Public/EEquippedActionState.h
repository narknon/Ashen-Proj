#pragma once
#include "CoreMinimal.h"
#include "EEquippedActionState.generated.h"

UENUM(BlueprintType)
enum class EEquippedActionState : uint8 {
    UnequipLeft,
    UnequipRight,
    MainAction,
    ReequipLeft,
    ReequipRight,
    EndAction,
};

