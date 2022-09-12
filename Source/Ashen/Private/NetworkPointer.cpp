#include "NetworkPointer.h"

FNetworkPointer::FNetworkPointer() {
    this->ResolvedActor = NULL;
    this->bDeferSpawn = false;
    this->ConnectionGuidValue = 0;
    this->NetworkCreation = ENetworkCreation::Replicate;
}

