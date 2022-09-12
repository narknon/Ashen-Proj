#pragma once
#include "CoreMinimal.h"
#include "EPerceivedLOS.generated.h"

UENUM(BlueprintType)
enum class EPerceivedLOS : uint8 {
    Invisible,
    Partial,
    Visible,
};

