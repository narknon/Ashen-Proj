#pragma once
#include "CoreMinimal.h"
#include "EAIContextType.generated.h"

UENUM(BlueprintType)
enum class EAIContextType : uint8 {
    None,
    Camping,
    Lookout,
    Worship,
    Fortify,
    Ambush,
    Guardian,
    JumpScare,
    Slavery,
    Wraith,
    Challenge,
    Bombard,
    Herd,
    Coward,
};

