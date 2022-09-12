#include "AIAlternateSpeedOption.h"

FAIAlternateSpeedOption::FAIAlternateSpeedOption() {
    this->MoveSpeed = EMovementSpeedDescription::MOVE_None;
    this->MoveSpeedMultiplier = 0.00f;
    this->bRequiresFirstBlood = false;
}

