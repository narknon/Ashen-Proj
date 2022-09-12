#pragma once
#include "CoreMinimal.h"
#include "EStackModifierType.generated.h"

UENUM(BlueprintType)
enum class EStackModifierType : uint8 {
    None,
    Dropping,
    Moving,
};

