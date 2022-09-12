#pragma once
#include "CoreMinimal.h"
#include "EEquipmentState.generated.h"

UENUM(BlueprintType)
enum class EEquipmentState : uint8 {
    Undefined,
    Stored,
    Drawn,
    Physical,
    Holstered,
};

