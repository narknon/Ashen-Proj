#include "BTT_ElderDark_MoveToDarkness.h"

UBTT_ElderDark_MoveToDarkness::UBTT_ElderDark_MoveToDarkness() {
    this->SearchHalfRadius = 30.00f;
    this->ArenaProxyThickness = 50.00f;
    this->bBreakOnInDarkness = false;
    this->bUpdateTargetLocationOnTick = true;
    this->UpdateTargetLocationOnTickInterval = 0.50f;
}

