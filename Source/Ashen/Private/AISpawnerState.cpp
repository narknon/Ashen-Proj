#include "AISpawnerState.h"

FAISpawnerState::FAISpawnerState() {
    this->bDidSpawn = false;
    this->bIsDead = false;
    this->bIsDeadFromSync = false;
    this->TotalDeaths = 0;
    this->LastDeathTime = 0.00f;
    this->bPlayerRelationWasChanged = false;
    this->LastPlayerRelationship = EAIRelationship::Hostile;
}

