#pragma once
#include "CoreMinimal.h"
#include "EGefnState.generated.h"

UENUM(BlueprintType)
enum class EGefnState : uint8 {
    None,
    LightAnnex,
    HighlandsSwimming,
    HighlandsEmerged,
};

