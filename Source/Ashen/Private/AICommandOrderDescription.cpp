#include "AICommandOrderDescription.h"

FAICommandOrderDescription::FAICommandOrderDescription() {
    this->CommandClass = NULL;
    this->OrderTimeOut = 0.00f;
    this->bFailOrderOnTimeOut = false;
    this->StaminaCost = 0.00f;
    this->StrategyCost = 0.00f;
    this->GlobalCoolDown = 0.00f;
    this->Cooldown = 0.00f;
    this->MinOrderValid = 0;
    this->MinSubordinates = 0;
    this->MinSubordinatesPercentage = 0.00f;
    this->MinDesireScoreToCommand = 0.00f;
    this->StaminaRequired = 0.00f;
    this->StrategyRequired = 0.00f;
    this->MinCombatTime = 0.00f;
    this->MaxCombatTime = 0.00f;
    this->bIgnoresGlobalCooldown = false;
    this->bMustHaveTargetToBeValid = false;
    this->bDamageCannotInterruptCommand = false;
    this->bDamageCannotInterruptOrder = false;
    this->CommandMontage = NULL;
    this->bForceCommandAction = false;
    this->bForceOrderAction = false;
}

