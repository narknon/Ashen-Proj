#pragma once
#include "CoreMinimal.h"
#include "ESurfaceType.generated.h"

UENUM(BlueprintType)
enum class ESurfaceType : uint8 {
    Ash,
    Wood,
    Stone,
    Dirt,
    Metal,
    Liquid,
};

