#pragma once
#include "CoreMinimal.h"
#include "EStreamingZoneEventType.generated.h"

UENUM(BlueprintType)
enum class EStreamingZoneEventType : uint8 {
    ZoneRequested,
    ZoneUnrequested,
    ZoneAddedToWorld,
    ZoneRemoveFromWorld,
};

