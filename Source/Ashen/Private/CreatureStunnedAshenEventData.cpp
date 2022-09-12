#include "CreatureStunnedAshenEventData.h"

class ACreature;

ACreature* UCreatureStunnedAshenEventData::GetStunSource() const {
    return NULL;
}

EMaxStunEffect UCreatureStunnedAshenEventData::GetStunEffectType() const {
    return EMaxStunEffect::None;
}

UCreatureStunnedAshenEventData::UCreatureStunnedAshenEventData() {
    this->StunEffect = EMaxStunEffect::None;
    this->SourceOfStun = NULL;
}

