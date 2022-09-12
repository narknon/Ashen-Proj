#include "CreatureDeathAshenEventData.h"

class AActor;

AActor* UCreatureDeathAshenEventData::GetSource() {
    return NULL;
}

UCreatureDeathAshenEventData::UCreatureDeathAshenEventData() {
    this->Source = NULL;
}

