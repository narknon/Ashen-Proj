#pragma once
#include "CoreMinimal.h"
#include "EInteractionEventType.generated.h"

UENUM(BlueprintType)
enum class EInteractionEventType : uint8 {
    Open,
    Close,
    Use,
};

