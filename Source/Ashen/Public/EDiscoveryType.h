#pragma once
#include "CoreMinimal.h"
#include "EDiscoveryType.generated.h"

UENUM(BlueprintType)
enum class EDiscoveryType : uint8 {
    None,
    World,
    Area,
    SubArea,
    Cave,
    Dungeon,
    Secret,
    SavePoint,
    _Max,
};

