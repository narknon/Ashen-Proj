#include "NpcData.h"

FNpcData::FNpcData() {
    this->Type = ENpcType::None;
    this->bIsMultiplayerCompanion = false;
    this->HeroSkinDefault = NULL;
    this->HeroSkinUpgraded = NULL;
    this->OutfitBuffEffect = NULL;
}

