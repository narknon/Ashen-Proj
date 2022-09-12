#pragma once
#include "CoreMinimal.h"
#include "EAIChallangeContextState.generated.h"

UENUM(BlueprintType)
enum class EAIChallangeContextState : uint8 {
    Idle,
    Active,
    Broken,
    Completed,
};

