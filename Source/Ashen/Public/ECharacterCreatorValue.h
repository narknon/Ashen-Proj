#pragma once
#include "CoreMinimal.h"
#include "ECharacterCreatorValue.generated.h"

UENUM(BlueprintType)
enum class ECharacterCreatorValue : uint8 {
    Gender,
    HairIndex,
    HairAccessoryIndex,
    HairColourIndex,
    SkinColourIndex,
};

