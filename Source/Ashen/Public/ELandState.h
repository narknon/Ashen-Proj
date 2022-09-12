#pragma once
#include "CoreMinimal.h"
#include "ELandState.generated.h"

UENUM(BlueprintType)
enum class ELandState : uint8 {
    Undefined,
    LightLand,
    HeavyLand,
    Death,
};

