#pragma once
#include "CoreMinimal.h"
#include "EPairTriggerType.generated.h"

UENUM(BlueprintType)
enum class EPairTriggerType : uint8 {
    InitialCheckTrigger,
    DisconnectingTrigger,
    None,
};

