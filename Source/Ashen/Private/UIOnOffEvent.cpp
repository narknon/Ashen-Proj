#include "UIOnOffEvent.h"

EUIOnOffSetting UUIOnOffEvent::GetSettingCategory() {
    return EUIOnOffSetting::None;
}

bool UUIOnOffEvent::GetIsOn() {
    return false;
}

UUIOnOffEvent::UUIOnOffEvent() {
    this->bIsOn = false;
    this->SettingType = EUIOnOffSetting::None;
}

