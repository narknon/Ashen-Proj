#pragma once
#include "CoreMinimal.h"
#include "EScagSpawnState.generated.h"

UENUM(BlueprintType)
enum class EScagSpawnState : uint8 {
    None,
    Ground,
    Cliff_Hang,
    Surface_Cling,
    Cliff_Hang_Turret,
};

