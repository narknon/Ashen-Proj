#include "BTD_IsAtContextDesire.h"

UBTD_IsAtContextDesire::UBTD_IsAtContextDesire() {
    this->ContextDesire = EAIContextDesire::None;
    this->bCheckLocation = true;
    this->bCheckRotation = true;
    this->RotationCutOff = 30.00f;
}

