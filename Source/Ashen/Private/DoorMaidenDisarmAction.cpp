#include "DoorMaidenDisarmAction.h"

class UAnimMontage;

void ADoorMaidenDisarmAction::OnMontageEnded(UAnimMontage* _Montage, bool bInterrupted) {
}

ADoorMaidenDisarmAction::ADoorMaidenDisarmAction() {
    this->DisarmMontage = NULL;
    this->IdleLoopMontage = NULL;
}

