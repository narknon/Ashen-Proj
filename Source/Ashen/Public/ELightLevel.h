#pragma once
#include "CoreMinimal.h"
#include "ELightLevel.generated.h"

UENUM(BlueprintType)
enum class ELightLevel : uint8 {
    Undefined,
    Dark,
    Light,
    MAX,
};

