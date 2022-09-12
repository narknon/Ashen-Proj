#include "PlayerEventsCountCallback.h"

ETrackedPlayerEvent UPlayerEventsCountCallback::GetTrackedEvent() {
    return ETrackedPlayerEvent::None;
}

int32 UPlayerEventsCountCallback::GetAmount() {
    return 0;
}

UPlayerEventsCountCallback::UPlayerEventsCountCallback() {
    this->Type = ETrackedPlayerEvent::None;
    this->AmountNow = 0;
}

