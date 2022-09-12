#include "AIPerceptionSenseRules.h"

FAIPerceptionSenseRules::FAIPerceptionSenseRules() {
    this->Range = 0.00f;
    this->SenseTime = 0.00f;
    this->bAutoSenseOnEnterRange = false;
    this->bAutoSenseOnRun = false;
    this->bAutoSenseOnSprint = false;
    this->bAutoSenseOnAttackHit = false;
    this->bAutoSenseOnAttackTelegraph = false;
    this->bPreserveSenseTime = false;
    this->bDiscoverOnSense = false;
    this->MinSoundLevel = ESoundLevel::None;
}

