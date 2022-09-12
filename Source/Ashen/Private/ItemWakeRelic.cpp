#include "ItemWakeRelic.h"

void UItemWakeRelic::TrySpawnAsAshwraith(EAshenDamageType KillingDamageType, bool& CanSpawn) {
}

void UItemWakeRelic::RespawnAsAshwraith() {
}

TArray<FUIStatBarData> UItemWakeRelic::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

void UItemWakeRelic::CouldSpawnAsAshwraith(bool& CanSpawn) {
}

UItemWakeRelic::UItemWakeRelic() {
    this->DeathMontage = NULL;
    this->RespawnMontage = NULL;
    this->AshwraithSkeletalMesh = NULL;
    this->DummyActorClass = NULL;
    this->FxRevertedParticles = NULL;
    this->FxConvertedParticles = NULL;
    this->FxConvertedAudio = NULL;
    this->OriginalNpcMesh = NULL;
}

