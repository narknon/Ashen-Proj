#include "UISelectableMenuSlot.h"

class UUIPhase2MenuTab;

void UUISelectableMenuSlot::ManuallyOverrideMenuTabParent(UUIPhase2MenuTab* ParentOverride) {
}

bool UUISelectableMenuSlot::DoesOwningMenuTabHaveFocus() const {
    return false;
}

UUISelectableMenuSlot::UUISelectableMenuSlot() {
    this->OwningMenuTab = NULL;
}

