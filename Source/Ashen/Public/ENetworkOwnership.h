#pragma once
#include "CoreMinimal.h"
#include "ENetworkOwnership.generated.h"

UENUM(BlueprintType)
enum class ENetworkOwnership : uint8 {
    None,
    Client,
    Host,
};

