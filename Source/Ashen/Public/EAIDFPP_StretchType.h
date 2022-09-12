#pragma once
#include "CoreMinimal.h"
#include "EAIDFPP_StretchType.generated.h"

UENUM(BlueprintType)
enum class EAIDFPP_StretchType : uint8 {
    None,
    StretchPath,
    AnchorForStretch,
    EAIDFPP_MAX UMETA(Hidden),
};

