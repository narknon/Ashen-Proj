#pragma once
#include "CoreMinimal.h"
#include "ECompassDirs.generated.h"

UENUM(BlueprintType)
enum class ECompassDirs : uint8 {
    north,
    east,
    south,
    west,
    none,
    Ignore,
};

