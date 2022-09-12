#include "ItemFuseRelic.h"

void UItemFuseRelic::OnWorldWeaponHit(FVector HitLocation) {
}

void UItemFuseRelic::OnFullyChargedAttack(FAshenDamage& Damage) {
}

TArray<FUIStatBarData> UItemFuseRelic::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemFuseRelic::UItemFuseRelic() {
    this->AoeBurstRadius = 100.00f;
    this->AoeDamagePercent = 0.50f;
    this->AoePoiseDamagePercent = 2.00f;
    this->ChargeCooldown = 10.00f;
    this->FuseAoeParticle = NULL;
    this->ExplosionSoundEffect = NULL;
}

