#include "AnimSyncData.h"

FAnimSyncData::FAnimSyncData() {
    this->IsWalking = false;
    this->IsRunning = false;
    this->HeadLookYaw = 0.00f;
    this->HeadLookPitch = 0.00f;
    this->MovementMode = MOVE_None;
    this->CustomMovementMode = ECustomMovementMode::CUSTOM_None;
}

