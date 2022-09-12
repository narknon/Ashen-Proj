#include "DownedAction.h"

ADownedAction::ADownedAction() {
    this->DownedDamageType = EAshenDamageType::None;
    this->MaxGiveUpTime = 1.00f;
    this->GiveUpTimer = 0.00f;
    this->GetUpMontage = NULL;
    this->DownedMontage = NULL;
}

