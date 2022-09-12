#pragma once
#include "CoreMinimal.h"
#include "EInputUIEventTypes.generated.h"

UENUM(BlueprintType)
enum class EInputUIEventTypes : uint8 {
    None,
    DropItem_Y,
    Confirm_A,
    Cancel_B,
    CloseAll,
    InspectItem_X,
    SwitchMenuTabLeft,
    SwitchMenuTabRight,
    OpenStatisticsPanel,
    MapZoom,
    MapPan,
    ScrollUp,
    ScrollDown,
    MouseLeft,
    MouseRight,
    NavigateUp,
    NavigateSideways,
    UseConsumable,
    DragEvent,
    Confirm_InGame,
    TimedOut,
    _Max,
};

