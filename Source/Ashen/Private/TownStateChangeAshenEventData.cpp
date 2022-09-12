#include "TownStateChangeAshenEventData.h"

ETownBuildingType UTownStateChangeAshenEventData::GetTownBuildingType() {
    return ETownBuildingType::None;
}

ETownBuildingState UTownStateChangeAshenEventData::GetOldState() {
    return ETownBuildingState::Unbuilt;
}

ETownBuildingState UTownStateChangeAshenEventData::GetNewState() {
    return ETownBuildingState::Unbuilt;
}

UTownStateChangeAshenEventData::UTownStateChangeAshenEventData() {
}

