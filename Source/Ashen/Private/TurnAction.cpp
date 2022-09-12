#include "TurnAction.h"

class UAnimMontage;

void ATurnAction::OnMontageEnded(UAnimMontage* _Montage, bool bInterrupted) {
}

ATurnAction::ATurnAction() {
    this->PathFollowingComp = NULL;
}

