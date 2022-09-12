#pragma once
#include "CoreMinimal.h"
#include "EUIStatBuffIconType.generated.h"

UENUM(BlueprintType)
enum class EUIStatBuffIconType : uint8 {
    None,
    NoImage_Unsigned,
    NoImage_Signed,
    NoImage_Percentage,
    NoImage_SignedPercentage,
    LightDamage,
    HeavyDamage,
    Max,
    Instant,
    Timer,
    Instant_NoUIChange,
};

