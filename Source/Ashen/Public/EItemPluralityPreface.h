#pragma once
#include "CoreMinimal.h"
#include "EItemPluralityPreface.generated.h"

UENUM(BlueprintType)
enum class EItemPluralityPreface : uint8 {
    none,
    a,
    an,
    the,
    some,
};

