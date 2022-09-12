#include "NetworkDoor.h"

class ACreature;
class UObject;
class UInteraction;

TArray<UInteraction*> ANetworkDoor::GetInteractions_Implementation(ACreature* Target, UObject* Context) {
    return TArray<UInteraction*>();
}

ANetworkDoor::ANetworkDoor() {
    this->GameMode = NULL;
}

