#pragma once
#include "CoreMinimal.h"
#include "EAIPerceptionSense.generated.h"

UENUM(BlueprintType)
enum class EAIPerceptionSense : uint8 {
    None,
    Low,
    Medium,
    High,
    MAX,
};

