#include "AISpawnStoryHumanoid.h"

AAISpawnStoryHumanoid::AAISpawnStoryHumanoid() {
    this->NpcType = ENpcType::None;
    this->bNeverSoftReset = true;
    this->bInvulnerableOnSpawn = true;
    this->bOverrideStartingWeaponLoadout = false;
    this->bOverrideStartingExtraWeaponLoadout = false;
    this->bOverrideStartingShieldClassLoadout = false;
    this->bOverrideStartingUtilityClassLoadout = false;
    this->StartingWeaponState = EEquipmentState::Holstered;
    this->StartingExtraWeaponState = EEquipmentState::Holstered;
    this->StartingShieldState = EEquipmentState::Holstered;
    this->StartingUtilityState = EEquipmentState::Holstered;
    this->AIClassRef = NULL;
    this->UpgradedClassRef = NULL;
    this->StartingWeaponClassRef = NULL;
    this->StartingExtraWeaponClassRef = NULL;
    this->StartingShieldClassRef = NULL;
    this->StartingUtilityClassRef = NULL;
}

