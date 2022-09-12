#include "AIEvadeDescription.h"

FAIEvadeDescription::FAIEvadeDescription() {
    this->StaminaCost = 0.00f;
    this->StrategyCost = 0.00f;
    this->Cooldown = 0.00f;
    this->CanUseWhileBlocking = false;
    this->ManoeuvreRange = 0.00f;
    this->ManoeuvreFacingAngleOffset = 0.00f;
    this->ManoeuvreConeHalfAngle = 0.00f;
    this->Difficulty = 0.00f;
    this->bDamageCannotInterrupt = false;
    this->bForceAction = false;
    this->ManoeuvreMontage = NULL;
}

