#include "AreaEnteredEventData.h"

class AHero;

bool UAreaEnteredEventData::IsNewlyDiscovered() {
    return false;
}

bool UAreaEnteredEventData::IsHeroLocal() {
    return false;
}

AHero* UAreaEnteredEventData::GetHero() {
    return NULL;
}

FText UAreaEnteredEventData::GetAreaName() {
    return FText::GetEmpty();
}

FAreaData UAreaEnteredEventData::GetAreaData() {
    return FAreaData{};
}

UAreaEnteredEventData::UAreaEnteredEventData() {
}

