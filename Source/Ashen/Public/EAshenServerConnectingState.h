#pragma once
#include "CoreMinimal.h"
#include "EAshenServerConnectingState.generated.h"

UENUM(BlueprintType)
enum class EAshenServerConnectingState : uint8 {
    NotApplicable,
    WaitingToConnect,
    CheckingOnlineVersion,
    Connected,
    Final,
};

