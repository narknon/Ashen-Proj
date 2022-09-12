#pragma once
#include "CoreMinimal.h"
#include "EDialogueTone.generated.h"

UENUM(BlueprintType)
enum class EDialogueTone : uint8 {
    Neutral,
    Positive,
    Negative,
    None,
};

