#include "EarlyEndAIAttackRule.h"

FEarlyEndAIAttackRule::FEarlyEndAIAttackRule() {
    this->EndIfHitCountNot = 0;
    this->EndIfHitCountLessThan = 0;
    this->EndIfHitCountGreaterThan = 0;
    this->EndIfRandomRollGreaterThan = 0.00f;
    this->EndIfNotInRange = false;
    this->AttackEndMontage = NULL;
}

