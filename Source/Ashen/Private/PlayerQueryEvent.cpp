#include "PlayerQueryEvent.h"

FName UPlayerQueryEvent::GetQueryName() {
    return NAME_None;
}

FPlayerEventsAndStateQuery UPlayerQueryEvent::GetQueryData() {
    return FPlayerEventsAndStateQuery{};
}

bool UPlayerQueryEvent::GetIsValid() {
    return false;
}

UPlayerQueryEvent::UPlayerQueryEvent() {
    this->IsNowValid = false;
}

