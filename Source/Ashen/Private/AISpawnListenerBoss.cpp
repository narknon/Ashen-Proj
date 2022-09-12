#include "AISpawnListenerBoss.h"

AAISpawnListenerBoss::AAISpawnListenerBoss() {
    this->ForgoneSpawnerClasses = NULL;
    this->SpawnedForgoneLifetime = 60.00f;
    this->SpawnedForgoneLifetimeVariation = 10.00f;
    this->DeathSequence = NULL;
    this->MegaGroup = NULL;
}

