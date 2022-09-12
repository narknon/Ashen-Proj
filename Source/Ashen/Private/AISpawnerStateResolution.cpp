#include "AISpawnerStateResolution.h"

FAISpawnerStateResolution::FAISpawnerStateResolution() {
    this->TimeSinceDeath = 0.00f;
    this->Relationship = EAIRelationship::Hostile;
    this->ResolutionFlags = 0;
}

