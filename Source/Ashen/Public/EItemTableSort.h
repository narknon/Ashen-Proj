#pragma once
#include "CoreMinimal.h"
#include "EItemTableSort.generated.h"

UENUM(BlueprintType)
namespace EItemTableSort {
    enum Type {
        Undefined,
        ItemType,
        HeaviestFirst,
        Alphabetically,
        Numerically,
    };
}

