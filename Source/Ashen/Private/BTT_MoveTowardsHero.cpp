#include "BTT_MoveTowardsHero.h"

UBTT_MoveTowardsHero::UBTT_MoveTowardsHero() {
    this->MinMoveDistance = 500.00f;
    this->MaxMoveDistance = 1000.00f;
    this->SpeedChangeMinTime = 1.00f;
    this->ToHeroHalfAngle = 20.00f;
    this->bEndMoveOnCombatCheck = true;
    this->bEndMoveOnDownedHero = true;
    this->bEndMoveOnDoorReq = true;
    this->bEndMoveOnClimbReq = true;
}

