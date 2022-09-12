#include "UIDeathCard.h"



UUIDeathCard::UUIDeathCard() {
    this->MPC_DeathScreenCollection = NULL;
    this->AllowDisolve = false;
    this->DisolveAmount = -0.50f;
    this->DisolveRate = 0.20f;
    this->Timer = 0.00f;
    this->AllowDisolveTime = 2.50f;
    this->LoadDelayTime = 10.70f;
    this->LoadStarted = false;
}

