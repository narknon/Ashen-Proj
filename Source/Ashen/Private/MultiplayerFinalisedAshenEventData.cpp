#include "MultiplayerFinalisedAshenEventData.h"

class AHero;

AHero* UMultiplayerFinalisedAshenEventData::GetRemoteHero() {
    return NULL;
}

AHero* UMultiplayerFinalisedAshenEventData::GetLocalHero() {
    return NULL;
}

UMultiplayerFinalisedAshenEventData::UMultiplayerFinalisedAshenEventData() {
    this->LocalHero = NULL;
    this->RemoteHero = NULL;
}

