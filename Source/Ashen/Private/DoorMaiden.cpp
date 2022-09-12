#include "DoorMaiden.h"

void ADoorMaiden::SyncDisarmState_Implementation(bool bDisarmed) {
}

ADoorMaiden::ADoorMaiden() {
    this->DoorDisarmL = NULL;
    this->DoorDisarmR = NULL;
    this->DoorDisarmIdle = NULL;
}

