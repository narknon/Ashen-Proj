#pragma once
#include "CoreMinimal.h"
#include "EAIFootIKLockMode.generated.h"

UENUM(BlueprintType)
enum class EAIFootIKLockMode : uint8 {
    Free,
    Locked,
    Unlocking,
};

