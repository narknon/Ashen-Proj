#include "BTT_PathTowardsContextDesire.h"

UBTT_PathTowardsContextDesire::UBTT_PathTowardsContextDesire() {
    this->ContextDesire = EAIContextDesire::None;
    this->MinMoveDistance = 1000.00f;
    this->MaxMoveDistance = 3000.00f;
    this->ToDesireHalfAngle = 20.00f;
}

