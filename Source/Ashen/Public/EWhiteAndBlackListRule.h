#pragma once
#include "CoreMinimal.h"
#include "EWhiteAndBlackListRule.generated.h"

UENUM(BlueprintType)
enum class EWhiteAndBlackListRule : uint8 {
    AllValid,
    OneValid,
};

