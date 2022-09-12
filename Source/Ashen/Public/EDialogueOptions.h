#pragma once
#include "CoreMinimal.h"
#include "EDialogueOptions.generated.h"

UENUM(BlueprintType)
enum class EDialogueOptions : uint8 {
    Body,
    PromptA,
    PromptB,
};

