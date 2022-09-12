#pragma once
#include "CoreMinimal.h"
#include "EActionState.generated.h"

UENUM(BlueprintType)
enum class EActionState : uint8 {
    Pending,
    Active,
    Cancelled,
    Interrupted,
    Finished,
};

