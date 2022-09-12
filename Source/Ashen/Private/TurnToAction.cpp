#include "TurnToAction.h"

class UAnimMontage;

void ATurnToAction::OnMontageEnded(UAnimMontage* _Montage, bool bInterrupted) {
}

ATurnToAction::ATurnToAction() {
    this->PathFollowingComp = NULL;
}

