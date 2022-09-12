#include "AIHeroFollower.h"

class UItemWaterBottle;

void AAIHeroFollower::SyncEquipmentState_Implementation(EEquipmentState SideWeaponState, EEquipmentState BackWeaponState, EEquipmentState ShieldState, EEquipmentState UtilityState) {
}

bool AAIHeroFollower::IsLocalPlayer() const {
    return false;
}

void AAIHeroFollower::InitializeStartingEquipment() {
}

UItemWaterBottle* AAIHeroFollower::GetWaterBottle() const {
    return NULL;
}

bool AAIHeroFollower::GetUsing2HandedWeapon() const {
    return false;
}

AAIHeroFollower::AAIHeroFollower() {
    this->HealFood_HPUnderPercent = 0.75f;
    this->HealFood_HPUnderPercentInCombat = 0.50f;
    this->HealFood_Cooldown = 10.00f;
    this->HealWaterBottle_HPUnderPercent = 0.60f;
    this->HealWaterBottle_HPUnderPercentInCombat = 0.30f;
    this->HealWaterBottle_Cooldown = 5.00f;
    this->NearHeroRadius = 400.00f;
    this->FollowHeroRadius = 200.00f;
    this->SpeedMatchFollowHeroRadius = 900.00f;
    this->SpeedUpFollowHeroRadius = 1300.00f;
    this->HostileEngageRangeAroundSelf = 800.00f;
    this->HostileEngageRangeAroundPlayer = 1000.00f;
    this->HostileEngageMinPlayerRange = 1000.00f;
    this->EnemyBufferToCombatRez = 300.00f;
    this->CombatRezEnemyIgnoreTimeOut = 15.00f;
    this->DoorAssistDelay = 3.00f;
    this->ClimbAssistDelay = 2.00f;
    this->EvadeElderDarkBurstMinTime = 3.00f;
    this->ElderDarkHoleSpotDistance = 1000.00f;
    this->ElderDarkHoleSpotDistanceFirstTime = 500.00f;
    this->BoneLockOnSocketName = TEXT("BoneWeaponAttackableCollider");
    this->MatriachBoneSlamEvadeHitCounter = 1;
    this->bNoUIOnSummon = false;
    this->bUseLocalPlayerArmourDamageReduction = true;
    this->bNoMultiplayerScaleOnSummon = false;
    this->HelpHeroPuzzleDelay = 2.00f;
    this->FromBeacon = NULL;
    this->StartingWaterBottleClass = NULL;
    this->StartingFoodClass = NULL;
    this->StartingFoodCount = 5;
    this->bOverrideItemQualityAndLevel = false;
    this->OverrideWeaponQuality = EItemQuality::Tier0;
    this->OverrideWeaponLevel = 1;
    this->HealingFoodItem = NULL;
    this->WaterBottleItem = NULL;
    this->ElderDarkRef = NULL;
    this->MatriarchRef = NULL;
    this->ShadowOfGodRef = NULL;
    this->SissnaRef = NULL;
    this->SuperSissnaRef = NULL;
    this->GaroranRef = NULL;
    this->RiakRef = NULL;
}

