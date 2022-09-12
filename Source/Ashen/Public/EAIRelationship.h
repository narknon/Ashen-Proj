#pragma once
#include "CoreMinimal.h"
#include "EAIRelationship.generated.h"

UENUM(BlueprintType)
enum class EAIRelationship : uint8 {
    Hostile,
    Wary,
    Neutral,
    Friend,
};

