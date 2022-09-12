#include "NetworkComponent.h"

UNetworkComponent::UNetworkComponent() {
    this->NetworkCreation = ENetworkCreation::SyncOrReplicateIfHost;
    this->bDeferSpawn = false;
}

