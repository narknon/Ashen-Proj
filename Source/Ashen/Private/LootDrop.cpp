#include "LootDrop.h"

FLootDrop::FLootDrop() {
    this->Item = NULL;
    this->DropChance = 0.00f;
    this->bOverrideQuality = false;
    this->ItemQualityOverride = EItemQuality::Tier0;
}

