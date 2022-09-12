#include "BTT_MoveToAttackRange.h"

UBTT_MoveToAttackRange::UBTT_MoveToAttackRange() {
    this->PredictTargetPositionWeight = 0.50f;
    this->HalfAngleFromTarget = 5.00f;
    this->bUpdateTargetLocationOnTick = true;
    this->UpdateTargetLocationOnTickInterval = 0.50f;
    this->UpdateTargetLocationOnTickRange = 25.00f;
    this->DestPathToTargetCurveLimit = 1.50f;
}

