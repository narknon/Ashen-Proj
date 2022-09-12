#pragma once
#include "CoreMinimal.h"
#include "EUIPopupQueType.generated.h"

UENUM(BlueprintType)
enum class EUIPopupQueType : uint8 {
    None,
    Dialogue,
    Tutorial,
    Item,
    TownPerson,
    Zone,
    GenralText,
    Secret,
    TownFounding,
    All,
};

