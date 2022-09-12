#include "BralCliffRules.h"

FBralCliffRules::FBralCliffRules() {
    this->ClimbTrigger = NULL;
    this->bTriggerOnHeroOnly = false;
    this->bTriggerOnExit = false;
    this->bTriggerOnEnter = false;
    this->bTriggerGroupDrop = false;
    this->bTriggerOnCreatureWalking = false;
    this->bTriggerOnCreatureRunning = false;
    this->bTriggerOnCreatureSprinting = false;
}

