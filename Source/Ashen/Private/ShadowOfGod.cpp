#include "ShadowOfGod.h"

bool AShadowOfGod::ShouldStartFight() const {
    return false;
}

void AShadowOfGod::SetCanSpawnFxHands(bool SetTo) {
}

void AShadowOfGod::OnLurkChange_Implementation(bool bEnable) {
}

void AShadowOfGod::OnKillAmara_Authority_Implementation() {
}

FVector AShadowOfGod::GetIKOffHandWeaponTarget() const {
    return FVector{};
}

FVector AShadowOfGod::GetIKOffHandTarget() const {
    return FVector{};
}

FVector AShadowOfGod::GetIKMainHandWeaponTarget() const {
    return FVector{};
}

FVector AShadowOfGod::GetIKMainHandTarget() const {
    return FVector{};
}

void AShadowOfGod::FxHandSpawn(float DeltaTime) {
}

AShadowOfGod::AShadowOfGod() {
    this->IdleMontage = NULL;
    this->WispSpawnMontage = NULL;
    this->WraithSpawnMontage = NULL;
    this->ThroneIntroLoopMontage = NULL;
    this->ThroneDescendMontage = NULL;
    this->WeaponSphereTraceRadius = 2.50f;
    this->WeaponCollisionFixRate = 0.50f;
    this->WeaponCollisionRestoreRate = 0.25f;
    this->WeaponCollisionLimit = 200.00f;
    this->WeaponChainExtendMod = 0.50f;
    this->WeaponChainExtendLimit = 0.90f;
    this->WeaponIKFixResolution = 5;
    this->StartWispSummonWhenHPUnder = 1.00f;
    this->StartWraithSummonWhenHPUnder = 1.00f;
    this->PhaseTwoWisps_MaxActive = 6;
    this->PhaseTwoWisps_RespawnTime = 6;
    this->PhaseTwoWisps_FirstRespawnTime = 2;
    this->PhaseOneWisps_MaxActive = 6;
    this->PhaseOneWisps_RespawnTime = 6;
    this->PhaseOneWisps_FirstRespawnTime = 2;
    this->PhaseTwoWraiths_MaxActive = 2;
    this->PhaseTwoWraiths_RespawnTime = 6;
    this->PhaseTwoWraiths_FirstRespawnTime = 2;
    this->PhaseOneWraiths_MaxActive = 6;
    this->PhaseOneWraiths_RespawnTime = 6;
    this->PhaseOneWraiths_FirstRespawnTime = 2;
    this->KillFleaSequence = NULL;
    this->DeathSequence = NULL;
    this->GodSpawner = NULL;
    this->FxHandActor = NULL;
    this->FxHandSpawnRange = 180.00f;
    this->FxHandSpawnDistanceThreshold = 100.00f;
}

