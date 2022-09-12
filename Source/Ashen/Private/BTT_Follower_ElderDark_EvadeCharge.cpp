#include "BTT_Follower_ElderDark_EvadeCharge.h"

UBTT_Follower_ElderDark_EvadeCharge::UBTT_Follower_ElderDark_EvadeCharge() {
    this->UpdateTargetLocationOnTickInterval = 0.50f;
    this->EvadeBackHalfAngle = 20.00f;
    this->EvadeWideHalfAngle = 90.00f;
    this->EvadeMinDistance = 500.00f;
    this->EvadeMaxDistance = 800.00f;
}

