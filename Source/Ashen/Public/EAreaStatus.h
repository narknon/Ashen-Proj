#pragma once
#include "CoreMinimal.h"
#include "EAreaStatus.generated.h"

UENUM(BlueprintType)
enum class EAreaStatus : uint8 {
    None,
    Unexplored,
    RevealQueued,
    Explored,
};

