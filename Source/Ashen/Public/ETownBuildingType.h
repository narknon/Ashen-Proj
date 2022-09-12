#pragma once
#include "CoreMinimal.h"
#include "ETownBuildingType.generated.h"

UENUM(BlueprintType)
enum class ETownBuildingType : uint8 {
    None,
    PlayersHouse,
    Well,
    Path01,
    Path02,
    Longhouse,
};

