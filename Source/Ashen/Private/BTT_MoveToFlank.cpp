#include "BTT_MoveToFlank.h"

UBTT_MoveToFlank::UBTT_MoveToFlank() {
    this->CombatZone = EAICombatZone::Encounter;
    this->SegmentMinAngleStart = 80.00f;
    this->SegmentConeHalfAngle = 10.00f;
    this->DestPathToTargetCurveLimit = 4.00f;
}

