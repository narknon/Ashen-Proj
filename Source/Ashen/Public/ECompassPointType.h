#pragma once
#include "CoreMinimal.h"
#include "ECompassPointType.generated.h"

UENUM(BlueprintType)
enum class ECompassPointType : uint8 {
    NotSet,
    None,
    Player,
    PlayerDowned,
    PlayerCalling,
    PlayerPointing,
    North,
    CorpseLoot,
};

