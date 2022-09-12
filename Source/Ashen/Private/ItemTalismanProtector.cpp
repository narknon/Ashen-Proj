#include "ItemTalismanProtector.h"

class UAshenEventData;
class AHero;

void UItemTalismanProtector::OnMultiplayerNpcSelected(AHero* NPC, ENpcType NpcType) {
}

void UItemTalismanProtector::OnCompanionLost(UAshenEventData* AshenEventData) {
}

TArray<FUIStatBarData> UItemTalismanProtector::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanProtector::UItemTalismanProtector() {
    this->ProtectorBuffEffectClass = NULL;
    this->PoiseDamageMultiplier = 0.00f;
    this->PartnerPercentageHealthRequired = 0.00f;
    this->TalismanBuffEffect = NULL;
    this->NpcPartner = NULL;
}

