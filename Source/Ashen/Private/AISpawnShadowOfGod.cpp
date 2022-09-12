#include "AISpawnShadowOfGod.h"

void AAISpawnShadowOfGod::OnSpawnHexagonChargeParticles_Implementation(const FVector& AtLocation, const FRotator& AtRotation) {
}

AAISpawnShadowOfGod::AAISpawnShadowOfGod() {
    this->WraithSpawnerClass = NULL;
    this->WispSpawnerClass = NULL;
    this->ArenaCenterMarker = NULL;
    this->AmaraLink = NULL;
    this->EntryDoorLink_L = NULL;
    this->EntryDoorLink_R = NULL;
    this->HexaParticleSystemExplode = NULL;
    this->HexaParticleSystemCharge = NULL;
    this->HexagonSegmentLength = 100.00f;
    this->HexagonSegmentAngleStartOffset = 0.00f;
    this->bForceDrawHexagonDebugInEditor = false;
    this->bForceDrawHexagonDebugInPIE = false;
    this->MegaGroup = NULL;
    this->AIClassRef = NULL;
}

