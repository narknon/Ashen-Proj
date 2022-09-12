#pragma once
#include "CoreMinimal.h"
#include "EItemBehaviour.generated.h"

UENUM(BlueprintType)
enum class EItemBehaviour : uint8 {
    Undefined,
    PlayerBound,
    Disposable,
    Consumable,
    Equipment,
};

