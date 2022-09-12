#pragma once
#include "CoreMinimal.h"
#include "EItemActionNeeded.generated.h"

UENUM(BlueprintType)
enum class EItemActionNeeded : uint8 {
    Undefined,
    UnEquip,
    Equip,
    Nothing,
    Move,
    Destroy,
    Drop,
};

