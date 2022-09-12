#include "HeroCombatState.h"

FHeroCombatState::FHeroCombatState() {
    this->bIsEngagedInCombat = false;
    this->CombatEngagedAtTime = 0.00f;
    this->bCombatFirstBlood = false;
}

