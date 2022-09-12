#include "ScagCliffExitRules.h"

FScagCliffExitRules::FScagCliffExitRules() {
    this->Trigger = NULL;
    this->bTriggerOnHeroOnly = false;
    this->bTriggerOnExit = false;
    this->bTriggerOnEnter = false;
    this->bTriggerOnCreatureWalking = false;
    this->bTriggerOnCreatureRunning = false;
    this->bTriggerOnCreatureSprinting = false;
}

