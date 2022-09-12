#include "ActiveUserStateChangedAshenEventData.h"

EActiveUserState UActiveUserStateChangedAshenEventData::GetOldState() {
    return EActiveUserState::ControllerNotEngaged;
}

EActiveUserState UActiveUserStateChangedAshenEventData::GetNewState() {
    return EActiveUserState::ControllerNotEngaged;
}

UActiveUserStateChangedAshenEventData::UActiveUserStateChangedAshenEventData() {
}

