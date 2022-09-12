#pragma once
#include "CoreMinimal.h"
#include "EAshenMatchmakingState2.generated.h"

UENUM(BlueprintType)
enum class EAshenMatchmakingState2 : uint8 {
    NotApplicable,
    CleaningUp,
    CheckingCanPlayOnline,
    ServerConnecting,
    ServerConnected,
    PeersConnecting,
    PeersConnected,
};

