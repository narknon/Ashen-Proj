#pragma once
#include "CoreMinimal.h"
#include "EAIOrderResult.generated.h"

UENUM(BlueprintType)
enum class EAIOrderResult : uint8 {
    Success,
    Failed,
    InProgress,
};

