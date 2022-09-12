#include "AIContextIdleAnim.h"

FAIContextIdleAnim::FAIContextIdleAnim() {
    this->RequiresHandsFree = EEquipmentRequiredHands::Undefined;
    this->bRequiresLantern = false;
    this->bNeverLoDFreeze = false;
    this->bImmuneToInterupt = false;
    this->bUseAdditiveForTalking = false;
    this->IdleHeadLookAlpha = 0.00f;
}

