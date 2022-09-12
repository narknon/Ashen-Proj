#include "HeroBaseOverlapEventData.h"

class AQuestTrigger;
class AHero;

bool UHeroBaseOverlapEventData::IsQuestTriggerEqual(uint8 DesiredTriggerName) const {
    return false;
}

bool UHeroBaseOverlapEventData::IsHeroRemote() const {
    return false;
}

bool UHeroBaseOverlapEventData::IsHeroLocal() const {
    return false;
}

AQuestTrigger* UHeroBaseOverlapEventData::GetQuestTrigger() const {
    return NULL;
}

AHero* UHeroBaseOverlapEventData::GetHero() const {
    return NULL;
}

UHeroBaseOverlapEventData::UHeroBaseOverlapEventData() {
}

