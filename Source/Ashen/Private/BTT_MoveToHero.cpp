#include "BTT_MoveToHero.h"

UBTT_MoveToHero::UBTT_MoveToHero() {
    this->FromHeroHalfAngle = 45.00f;
    this->UpdateTargetLocationOnTickInterval = 0.50f;
    this->SpeedChangeMinTime = 1.00f;
    this->HeroLocPredictionTime = 0.50f;
    this->bEndMoveOnCombatCheck = true;
    this->bEndMoveOnDownedHero = true;
    this->bEndMoveOnDoorReq = true;
    this->bEndMoveOnClimbReq = true;
}

