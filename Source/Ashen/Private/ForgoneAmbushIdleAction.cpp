#include "ForgoneAmbushIdleAction.h"

class UAnimMontage;

void AForgoneAmbushIdleAction::OnMontageEnded(UAnimMontage* _Montage, bool bInterrupted) {
}

AForgoneAmbushIdleAction::AForgoneAmbushIdleAction() {
    this->EarlyEndMontage = NULL;
}

