#include "TravelPointAshenEventData.h"

class AHero;
class AActor;

AActor* UTravelPointAshenEventData::GetUsedTravelPoint() {
    return NULL;
}

AHero* UTravelPointAshenEventData::GetHero() {
    return NULL;
}

UTravelPointAshenEventData::UTravelPointAshenEventData() {
    this->TravelPointUsed = NULL;
    this->UsingHero = NULL;
}

