#pragma once
#include "CoreMinimal.h"
#include "EWaterType.generated.h"

UENUM(BlueprintType)
enum class EWaterType : uint8 {
    None,
    Default,
    Sap,
    Lava,
    Sulphur,
};

