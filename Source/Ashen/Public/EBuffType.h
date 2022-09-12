#pragma once
#include "CoreMinimal.h"
#include "EBuffType.generated.h"

UENUM(BlueprintType)
enum class EBuffType : uint8 {
    Food,
    Potion,
    Water,
    WaterBottle,
    Outfit,
    Talisman,
    Relic,
    Item,
    Undefined,
};

