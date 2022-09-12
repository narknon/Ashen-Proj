#include "TakeCurrencyEffect.h"


void ATakeCurrencyEffect::Play() {
}

void ATakeCurrencyEffect::GiveCurrency() {
}


int32 ATakeCurrencyEffect::CorpseRunEarlyCollect() {
    return 0;
}

ATakeCurrencyEffect::ATakeCurrencyEffect() {
    this->CurrencyClass = NULL;
    this->Velocity = 0.00f;
    this->ArcTime = 0.00f;
    this->DelayBeforeDeletion = 0.00f;
    this->VelocityModOverTime = NULL;
    this->GameState = NULL;
    this->CurrencyTakeAudio = NULL;
    this->CurrencySpawnAudio = NULL;
    this->ArcSize = 0.00f;
    this->ArcFraction = 0.00f;
    this->Running = false;
    this->AnimationTimer = 0.00f;
    this->DeleteTimer = 0.00f;
    this->DeletePending = false;
    this->GivesToHero = false;
    this->CurrencyAmount = 0;
}

