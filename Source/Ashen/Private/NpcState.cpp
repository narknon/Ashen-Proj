#include "NpcState.h"

FNpcState::FNpcState() {
    this->HouseState = ETownBuildingState::Unbuilt;
    this->OutfitState = ENpcOutfitState::Default;
    this->NumAcquires = 0;
    this->Dead = false;
    this->PoolProbabilityWeight = 0.00f;
}

