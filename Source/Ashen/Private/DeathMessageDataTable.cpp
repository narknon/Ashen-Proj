#include "DeathMessageDataTable.h"

FDeathMessageDataTable::FDeathMessageDataTable() {
    this->CreatureIdentifier = NULL;
    this->RequiredDamageType = EAshenDamageType::None;
    this->RequiredLightLevel = ELightLevel::Undefined;
}

