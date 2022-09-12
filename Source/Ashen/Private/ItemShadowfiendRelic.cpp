#include "ItemShadowfiendRelic.h"

class ACreature;
class AShadowFiendEffect;
class AHero;

void UItemShadowfiendRelic::TickProjectiles_Implementation(float DeltaTime) {
}

AShadowFiendEffect* UItemShadowfiendRelic::SpawnDamageEffect(FVector SpawnLocation, FRotator SpawnRotation) {
    return NULL;
}



void UItemShadowfiendRelic::OnReleaseDamageCharges_Implementation(AHero* Player, ACreature* Target, float Damage) {
}

void UItemShadowfiendRelic::OnPlayerHit(const FAshenDamage& Damage) {
}

void UItemShadowfiendRelic::OnMultiplayerFinalised(AHero* Player, ENpcType NPC) {
}

void UItemShadowfiendRelic::OnBuildDamageCharges_Implementation(AHero* Player, int32 Charges, ACreature* Target, float Damage) {
}

void UItemShadowfiendRelic::OnAttackHit(FAshenDamage& Damage, bool& TestSample) {
}

void UItemShadowfiendRelic::OnAllChargesLostFX_Implementation(AHero* Player) {
}

TArray<FUIStatBarData> UItemShadowfiendRelic::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemShadowfiendRelic::UItemShadowfiendRelic() {
    this->MaxStacks = 0;
    this->ShadowFiendEffect = NULL;
    this->DamageIncreasePerItemLevel = 1.00f;
    this->CurrentCharges = 0;
    this->CurrentTarget = NULL;
    this->MaskPhysicalItem = NULL;
    this->MaskAttachSocketName = TEXT("HairSocket");
}

