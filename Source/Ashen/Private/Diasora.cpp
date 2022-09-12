#include "Diasora.h"

class UAshenAnimNotify;




void ADiasora::SetDiasoraFjordState(EDiasoraFjordState State) {
}

void ADiasora::SendTriggerTickRemote_Implementation() {
}

void ADiasora::Notify(const UAshenAnimNotify* AshenNotify) {
}



EDiasoraFjordState ADiasora::GetDiasoraFjordState() {
    return EDiasoraFjordState::None;
}






ADiasora::ADiasora() {
    this->BreathVelocity = 0.00f;
    this->MaxBreathDamage = 0.00f;
    this->MinBreathDamage = 0.00f;
    this->BreathPushStrength = 200.00f;
    this->TopDamageTriggerStart = NULL;
    this->TopDamageTriggerEnd = NULL;
    this->BotDamageTriggerStart = NULL;
    this->BotDamageTriggerEnd = NULL;
    this->TopAttackAreaTrigger = NULL;
    this->BotAttackAreaTrigger = NULL;
    this->CharictersInTopAttackArea = 0;
    this->CharictersInBotAttackArea = 0;
    this->LandedAnimation_Length = 0.00f;
    this->OutOfSyncByNSecounds = 0.00f;
    this->CatchupPlayRate = 1.00f;
    this->FlyingState = EDiasoraFjordState::None;
    this->SkipResetTick = false;
    this->RecievedFirstLocalSyncTick = false;
    this->TimeSinceLocalTick = 0.00f;
    this->TimeSinceRemoteTick = 0.00f;
    this->OutOfSyncTolerence = 0.05f;
}

