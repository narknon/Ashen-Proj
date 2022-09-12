#include "DiasoraSky.h"

class UAshenAnimNotify;

void ADiasoraSky::SetDiasoraSkyState(EDiasoraWorldState State) {
}

void ADiasoraSky::Notify(const UAshenAnimNotify* AshenNotify) {
}

EDiasoraWorldState ADiasoraSky::GetDiasoraSkyState() {
    return EDiasoraWorldState::None;
}




ADiasoraSky::ADiasoraSky() {
    this->SafeToFade = false;
    this->FadeOutWhenPossible = false;
    this->DiasoraMesh = NULL;
    this->FlyingState = EDiasoraWorldState::None;
}

