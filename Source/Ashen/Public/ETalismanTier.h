#pragma once
#include "CoreMinimal.h"
#include "ETalismanTier.generated.h"

UENUM(BlueprintType)
enum class ETalismanTier : uint8 {
    None,
    Major,
    Minor,
    MAX,
};

