#include "NetworkActor.h"
#include "NetworkComponent.h"

void ANetworkActor::OpenChannelRPC_Implementation() {
}

ANetworkActor::ANetworkActor() {
    this->NetworkComponent = CreateDefaultSubobject<UNetworkComponent>(TEXT("NetworkComponent"));
}

