#pragma once
#include "CoreMinimal.h"
#include "EAITriggerType.generated.h"

UENUM(BlueprintType)
enum class EAITriggerType : uint8 {
    Context,
    Force_Flee_Combat,
    Forget_Hero,
};

