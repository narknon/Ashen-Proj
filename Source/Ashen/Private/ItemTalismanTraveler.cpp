#include "ItemTalismanTraveler.h"

void UItemTalismanTraveler::OnHeroTeleportedToSaveStone(FVector SaveStoneLocation) {
}

TArray<FUIStatBarData> UItemTalismanTraveler::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

float UItemTalismanTraveler::GetBonusHealth() {
    return 0.0f;
}

UItemTalismanTraveler::UItemTalismanTraveler() {
    this->HealthPerDistanceUnit = 0.00f;
    this->DistanceUnit = 0.00f;
    this->HealthBonusCap = 0.00f;
    this->TravelerBuffEffectClass = NULL;
    this->CurrentMaxDistance = 0.00f;
    this->HealthBonus = 0.00f;
    this->bShouldTick = false;
    this->TalismanBuffEffect = NULL;
}

