#pragma once
#include "CoreMinimal.h"
#include "EAIFollowerAttackType.generated.h"

UENUM(BlueprintType)
enum class EAIFollowerAttackType : uint8 {
    None,
    Light,
    Heavy,
    Shield_Bash,
    Dodge,
};

