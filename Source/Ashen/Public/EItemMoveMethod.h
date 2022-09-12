#pragma once
#include "CoreMinimal.h"
#include "EItemMoveMethod.generated.h"

UENUM(BlueprintType)
enum class EItemMoveMethod : uint8 {
    Undefined,
    PlayAnimsButDoNothing__LikeALazyBoi,
    Swap_NoMerge,
    SwapOrMergeAWithB,
    DestroyBMoveAToB,
    DropBMoveAToB,
    MoveAToBIfBEmpty,
    MoveAToBIfBEmptyOrMergable,
    MoveAToBTableIfSpaceOrMergable,
};

