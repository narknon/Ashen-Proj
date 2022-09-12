#pragma once
#include "CoreMinimal.h"
#include "PendingActionType.generated.h"

UENUM(BlueprintType)
enum class PendingActionType : uint8 {
    None,
    Jump,
    UseItem,
    Roll,
    Attack,
};

