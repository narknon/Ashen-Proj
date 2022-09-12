#pragma once
#include "CoreMinimal.h"
#include "EAIDFPP_TrackActorOffsetType.generated.h"

UENUM(BlueprintType)
enum class EAIDFPP_TrackActorOffsetType : uint8 {
    Fixed,
    ActorFacing,
    LastPointNormal,
    LastPointNormal_XY,
    EAIDFPP_MAX UMETA(Hidden),
};

