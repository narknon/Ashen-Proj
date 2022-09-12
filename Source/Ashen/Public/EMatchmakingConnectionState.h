#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingConnectionState.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingConnectionState : uint8 {
    Initialized,
    Connecting,
    Connected,
    Disconnected,
    Error,
};

