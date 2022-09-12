#include "AIMovementManoeuvreDescription.h"

FAIMovementManoeuvreDescription::FAIMovementManoeuvreDescription() {
    this->MoveType = EAICombatMovementType::None;
    this->DefaultMoveSpeed = EMovementSpeedDescription::MOVE_None;
    this->DefaultMoveSpeedMultiplier = 0.00f;
    this->StaminaCost = 0.00f;
    this->StrategyCost = 0.00f;
    this->Cooldown = 0.00f;
    this->GlobalCoolDown = 0.00f;
    this->bCooldownOnMoveEnd = false;
    this->bGlobalCooldownOnMoveEnd = false;
    this->bIgnoresGlobalCooldown = false;
    this->CanUseWhileBlocking = false;
}

