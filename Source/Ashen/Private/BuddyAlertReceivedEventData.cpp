#include "BuddyAlertReceivedEventData.h"

class AHero;

AHero* UBuddyAlertReceivedEventData::GetPingingHero() {
    return NULL;
}

UBuddyAlertReceivedEventData::UBuddyAlertReceivedEventData() {
    this->PingingHero = NULL;
}

