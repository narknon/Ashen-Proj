#include "BTT_AshenTurnTo.h"

UBTT_AshenTurnTo::UBTT_AshenTurnTo() {
    this->bExecuteOnMetronome = true;
    this->bTickOnMetronome = true;
    this->bWaitForActionFinish = true;
    this->bForceAction = false;
    this->TurnDegreesCutOffDefault = 30.00f;
    this->bAlignPerfectly = false;
    this->AlignPerfectlyTime = 0.10f;
    this->RotationCompleteTolerance = 0.10f;
}

