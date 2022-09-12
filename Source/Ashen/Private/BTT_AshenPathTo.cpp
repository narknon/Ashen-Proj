#include "BTT_AshenPathTo.h"

UBTT_AshenPathTo::UBTT_AshenPathTo() {
    this->bExecuteOnMetronome = true;
    this->bTickOnMetronome = true;
    this->bBreakOnEncounterHero = false;
    this->bBreakOnHostileSighted = false;
    this->bBreakOnHostileSensed = false;
    this->bBreakOnDetectedAttack = false;
    this->bBreakOnDamageTaken = false;
    this->bBreakOnCombatDesireChange = false;
    this->bBreakOnCombatOrder = true;
    this->BreakOnBackToWallValue = 0.00f;
    this->StuckMoveTime = 1.50f;
    this->StuckMoveMinDistance = 5.00f;
    this->MoveTimeLimit = 0.00f;
    this->BreakOnHostileDistance = 0.00f;
    this->BreakOnHostileDistancePrediction = 0.00f;
    this->bCanShieldMove = false;
    this->IsManoeuvreType = EAICombatMovementType::None;
}

