#include "SynchronizedActionDescription.h"

FSynchronizedActionDescription::FSynchronizedActionDescription() {
    this->SourceActionClass = NULL;
    this->SourceMontage = NULL;
    this->SourceCanDamageInterrupt = false;
    this->SourceHasMovementModeOverride = false;
    this->SourceMovementMode = MOVE_None;
    this->SourceCustomMode = ECustomMovementMode::CUSTOM_None;
    this->SourceHasPhysicsProfileOverride = false;
    this->TargetActionClass = NULL;
    this->TargetMontage = NULL;
    this->TargetCanDamageInterrupt = false;
    this->TargetHasLocationOverride = false;
    this->TargetLocationLerpTime = 0.00f;
    this->TargetHasDirectionOverride = false;
    this->TargetDirectionLerpTime = 0.00f;
    this->TargetHasMovementModeOverride = false;
    this->TargetMovementMode = MOVE_None;
    this->TargetCustomMode = ECustomMovementMode::CUSTOM_None;
    this->TargetHasPhysicsProfileOverride = false;
}

