#include "BTT_SetGlobalCoolDown.h"

UBTT_SetGlobalCoolDown::UBTT_SetGlobalCoolDown() {
    this->Cooldown = 0.00f;
    this->bClearCurrentFirst = true;
    this->bForMoveGCD = false;
    this->bForAttackGCD = true;
}

