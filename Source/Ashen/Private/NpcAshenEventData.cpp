#include "NpcAshenEventData.h"

class UTownManager;

UTownManager* UNpcAshenEventData::GetTownManager() {
    return NULL;
}

ENpcType UNpcAshenEventData::GetNpcType() {
    return ENpcType::None;
}

FNpcState UNpcAshenEventData::GetNpcState() {
    return FNpcState{};
}

UNpcAshenEventData::UNpcAshenEventData() {
    this->TownManager = NULL;
}

