#pragma once
#include "CoreMinimal.h"
#include "EPlatformSpecific.generated.h"

UENUM(BlueprintType)
enum class EPlatformSpecific : uint8 {
    Windows,
    XboxOne,
    XboxOneS,
    XboxOneX,
    PS4,
    PS4_Pro,
};

