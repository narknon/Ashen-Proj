#include "ItemTalismanAmity.h"

class AHero;
class UAshenEventData;

void UItemTalismanAmity::OnMultiplayerLost(UAshenEventData* AshenEventData) {
}

void UItemTalismanAmity::OnMultiplayerFinalised(AHero* NPC, ENpcType NpcType) {
}

TArray<FUIStatBarData> UItemTalismanAmity::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanAmity::UItemTalismanAmity() {
    this->AmityBuffEffectClass = NULL;
    this->MaxDistanceFromParter = 500.00f;
    this->MaxDamageResistancePercentage = 0.30f;
    this->ResistanceIncreasePerSecond = 0.02f;
    this->TalismanBuffEffect = NULL;
    this->NpcPartner = NULL;
}

