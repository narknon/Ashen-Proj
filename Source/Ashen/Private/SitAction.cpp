#include "SitAction.h"

class UAnimMontage;

void ASitAction::OnMontageEnded(UAnimMontage* _Montage, bool bInterrupted) {
}

ASitAction::ASitAction() {
    this->SitDownMontage = NULL;
    this->SitLoopMontage = NULL;
}

