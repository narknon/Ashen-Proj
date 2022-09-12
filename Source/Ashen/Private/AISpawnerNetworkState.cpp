#include "AISpawnerNetworkState.h"

FAISpawnerNetworkState::FAISpawnerNetworkState() {
    this->CreatureMontageHash = 0;
    this->TotalDeaths = 0;
    this->LastDeathTime = 0.00f;
    this->LastPlayerRelationship = EAIRelationship::Hostile;
    this->NetworkStateFlags = 0;
}

