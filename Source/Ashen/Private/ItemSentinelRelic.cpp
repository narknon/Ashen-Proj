#include "ItemSentinelRelic.h"

class AHero;
class UAshenEventData;

void UItemSentinelRelic::OnQuestStateChange(UAshenEventData* AshenEventData) {
}

void UItemSentinelRelic::OnFullWingsCreated_Implementation(AHero* _Hero) {
}

void UItemSentinelRelic::OnBrokenWingsCreated_Implementation(AHero* _Hero) {
}

TArray<FUIStatBarData> UItemSentinelRelic::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemSentinelRelic::UItemSentinelRelic() {
    this->BrokenWingBuffEffectClass = NULL;
    this->FixedWingBuffEffectClass = NULL;
    this->BrokenBuffEffectValue = 0.10f;
    this->FullBuffEffectValue = 0.20f;
    this->FullWingsMesh = NULL;
    this->BrokenWingsMesh = NULL;
    this->FullWingsQuestLine = NULL;
    this->SentinelWingsItem = NULL;
    this->ActiveBuffEffect = NULL;
}

