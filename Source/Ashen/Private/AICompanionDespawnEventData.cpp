#include "AICompanionDespawnEventData.h"

bool UAICompanionDespawnEventData::DidDespawnFromDeath() const {
    return false;
}

UAICompanionDespawnEventData::UAICompanionDespawnEventData() {
    this->bFromDeath = false;
}

