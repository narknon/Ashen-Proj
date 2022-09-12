#pragma once
#include "CoreMinimal.h"
#include "EInterfaceVerb.generated.h"

UENUM(BlueprintType)
enum class EInterfaceVerb : uint8 {
    Undefined,
    Store,
    Drop,
    Take,
    Buy,
    Use,
    Equip,
    Unequip,
    Swap,
    Split,
    Stack,
    ShowInfo,
    Move,
    PreviousTab,
    NextTab,
    Cancel,
    Sort,
    MenuToggle,
    MenuSelect,
    MenuMouse,
    DragDrop,
    SelectStart,
    SelectMove,
    SelectEnd,
};

