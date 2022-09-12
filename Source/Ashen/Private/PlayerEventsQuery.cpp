#include "PlayerEventsQuery.h"

FPlayerEventsQuery::FPlayerEventsQuery() {
    this->Event = ETrackedPlayerEvent::None;
    this->IncludedResets = false;
    this->ValidValueMin_Inclusive = 0;
    this->ValidValueMax_Inclusive = 0;
}

