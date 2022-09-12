#include "PlayerStateCallback.h"

ETrackedPlayerState UPlayerStateCallback::GetTrackedState() {
    return ETrackedPlayerState::None;
}

bool UPlayerStateCallback::GetStateNow() {
    return false;
}

UPlayerStateCallback::UPlayerStateCallback() {
    this->Type = ETrackedPlayerState::None;
    this->StateNow = false;
}

