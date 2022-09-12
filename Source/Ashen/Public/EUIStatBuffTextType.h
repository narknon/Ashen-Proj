#pragma once
#include "CoreMinimal.h"
#include "EUIStatBuffTextType.generated.h"

UENUM(BlueprintType)
enum class EUIStatBuffTextType : uint8 {
    None,
    Unsigned,
    Signed,
    Percentage,
    SignedPercentage,
};

