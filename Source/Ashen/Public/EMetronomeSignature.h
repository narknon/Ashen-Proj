#pragma once
#include "CoreMinimal.h"
#include "EMetronomeSignature.generated.h"

UENUM(BlueprintType)
enum class EMetronomeSignature : uint8 {
    Full,
    Half,
    Quarter,
};

