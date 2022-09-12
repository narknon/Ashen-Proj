#pragma once
#include "CoreMinimal.h"
#include "EAshenPeerConnectingState.generated.h"

UENUM(BlueprintType)
enum class EAshenPeerConnectingState : uint8 {
    NotApplicable,
    SessionCreate,
    SessionJoin,
    SessionReady,
    ConnectionListen,
    ConnectionJoin,
    ConnectionReady,
};

