#include "BTT_MoveAsDesiredAttack.h"

UBTT_MoveAsDesiredAttack::UBTT_MoveAsDesiredAttack() {
    this->DefaultFlankCombatZone = EAICombatZone::Melee;
    this->DefaultFlankSegmentMinAngleStart = 0.00f;
    this->DefaultFlankSegmentConeHalfAngle = 0.00f;
    this->DefaultFlankDestPathToTargetCurveLimit = 4.00f;
}

