#pragma once
#include "CoreMinimal.h"
#include "EEquipmentRequiredHands.generated.h"

UENUM(BlueprintType)
enum class EEquipmentRequiredHands : uint8 {
    Undefined,
    Left,
    Right,
    Both,
    None,
};

