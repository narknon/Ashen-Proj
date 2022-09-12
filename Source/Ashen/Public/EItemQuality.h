#pragma once
#include "CoreMinimal.h"
#include "EItemQuality.generated.h"

UENUM(BlueprintType)
enum class EItemQuality : uint8 {
    Tier0,
    Tier1,
    Tier2,
    Tier3,
    Max_Invalid,
};

