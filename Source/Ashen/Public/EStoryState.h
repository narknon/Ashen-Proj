#pragma once
#include "CoreMinimal.h"
#include "EStoryState.generated.h"

UENUM(BlueprintType)
enum class EStoryState : uint8 {
    Inactive,
    Active,
    Complete,
    Failed,
};

