#include "DodgeAction.h"

ADodgeAction::ADodgeAction() {
    this->bHasTarget = false;
    this->bBlend = false;
    this->bRotate = false;
    this->bPivot = false;
    this->bTurnLeft = false;
    this->bIsRoll = false;
    this->ForwardDodge = NULL;
    this->BackwardsDodge = NULL;
    this->LeftDodge = NULL;
    this->RightDodge = NULL;
    this->Roll = NULL;
    this->PendingAttack = false;
}

