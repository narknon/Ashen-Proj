#pragma once
#include "CoreMinimal.h"
#include "EDialogBranch.generated.h"

UENUM(BlueprintType)
enum class EDialogBranch : uint8 {
    Yes,
    No,
    Cancel,
};

