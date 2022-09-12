#include "NPCExtraHealthBarEvent.h"

bool UNPCExtraHealthBarEvent::GetShouldShowHealthBar() {
    return false;
}

ENpcType UNPCExtraHealthBarEvent::GetNPC() {
    return ENpcType::None;
}

float UNPCExtraHealthBarEvent::GetHealthPercentage() {
    return 0.0f;
}

UNPCExtraHealthBarEvent::UNPCExtraHealthBarEvent() {
    this->bShouldShow = false;
    this->HealthPercentage = 0.00f;
    this->NpcType = ENpcType::None;
}

