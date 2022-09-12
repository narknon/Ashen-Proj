#pragma once
#include "CoreMinimal.h"
#include "ECraftingResult.generated.h"

UENUM(BlueprintType)
enum class ECraftingResult : uint8 {
    FailedNoIngredients,
    FailedNoIngredients_wNotEnoughMoney,
    FailedAlreadyHave,
    FailedLocked,
    FailedInventoryFull,
    FailedError,
    FailedTalismanUnremoved,
    TalismanUnremoved_SameClass,
    AbleToCraft,
    AbleToRemove,
    Success,
    SuccessTalismanSwap,
    SuccessTalismanRemoved,
};

