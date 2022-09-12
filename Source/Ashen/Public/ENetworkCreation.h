#pragma once
#include "CoreMinimal.h"
#include "ENetworkCreation.generated.h"

UENUM(BlueprintType)
enum class ENetworkCreation : uint8 {
    Replicate,
    SyncOrReplicateIfHost,
    Ignored,
};

