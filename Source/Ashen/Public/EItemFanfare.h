#pragma once
#include "CoreMinimal.h"
#include "EItemFanfare.generated.h"

UENUM(BlueprintType)
enum class EItemFanfare : uint8 {
    None,
    OnAdd,
    OnAddDelayed,
    OnRemove,
    OnRemoveDelayed,
};

