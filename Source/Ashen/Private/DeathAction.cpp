#include "DeathAction.h"

ADeathAction::ADeathAction() {
    this->SkeletalMesh = NULL;
    this->PlayDeathAnim = true;
    this->bForceKillOnStart = false;
    this->LootActor = NULL;
}

