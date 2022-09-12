#include "CoopClamberAction.h"

EClamberOfferingState ACoopClamberAction::GetOfferState() {
    return EClamberOfferingState::Start;
}

ACoopClamberAction::ACoopClamberAction() {
    this->StartMontage = NULL;
    this->Hero = NULL;
}

