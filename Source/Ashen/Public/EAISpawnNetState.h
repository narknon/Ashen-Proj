#pragma once
#include "CoreMinimal.h"
#include "EAISpawnNetState.generated.h"

UENUM(BlueprintType)
enum class EAISpawnNetState : uint8 {
    None,
    BlockSpawn,
    ForceSpawn,
};

