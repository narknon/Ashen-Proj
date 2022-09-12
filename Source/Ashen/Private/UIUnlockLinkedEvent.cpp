#include "UIUnlockLinkedEvent.h"

EUIWidgetUnlockFX UUIUnlockLinkedEvent::GetSettingCategory() {
    return EUIWidgetUnlockFX::None;
}

UUIUnlockLinkedEvent::UUIUnlockLinkedEvent() {
    this->SettingType = EUIWidgetUnlockFX::None;
}

