#include "PlayerStateQuery.h"

FPlayerStateQuery::FPlayerStateQuery() {
    this->State = ETrackedPlayerState::None;
    this->RequiredState = false;
}

