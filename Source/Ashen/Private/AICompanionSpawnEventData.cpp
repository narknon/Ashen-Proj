#include "AICompanionSpawnEventData.h"

class AHero;

AHero* UAICompanionSpawnEventData::GetRemoteHero() {
    return NULL;
}

AHero* UAICompanionSpawnEventData::GetLocalHero() {
    return NULL;
}

UAICompanionSpawnEventData::UAICompanionSpawnEventData() {
    this->LocalHero = NULL;
    this->RemoteHero = NULL;
}

