#include "ScagTumbleRules.h"

FScagTumbleRules::FScagTumbleRules() {
    this->TumblePoint = NULL;
    this->TumbleTrigger = NULL;
    this->bTriggerOnHeroOnly = false;
    this->bTriggerOnExit = false;
    this->bTriggerOnEnter = false;
    this->bTriggerGroupDrop = false;
    this->bTriggerOnCreatureWalking = false;
    this->bTriggerOnCreatureRunning = false;
    this->bTriggerOnCreatureSprinting = false;
}

