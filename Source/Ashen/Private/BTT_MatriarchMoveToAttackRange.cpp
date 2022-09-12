#include "BTT_MatriarchMoveToAttackRange.h"

UBTT_MatriarchMoveToAttackRange::UBTT_MatriarchMoveToAttackRange() {
    this->PredictTargetPositionWeight = 0.50f;
    this->bUpdateTargetLocationOnTick = true;
    this->UpdateTargetLocationOnTickInterval = 0.50f;
    this->UpdateTargetLocationOnTickRange = 25.00f;
    this->MinimumRangeForRun = -1.00f;
}

