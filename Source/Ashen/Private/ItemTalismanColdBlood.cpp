#include "ItemTalismanColdBlood.h"

class UAshenEventData;
class AHero;
class AActor;
class UVitalAttributes;
class AAction;

void UItemTalismanColdBlood::OnRestedAtSaveStone() {
}

void UItemTalismanColdBlood::OnNpcDeath(AActor* _Parent, UVitalAttributes* _Source) {
}

void UItemTalismanColdBlood::OnNpcActionStateChanged(const AAction* Source, EActionState Current, EActionState Previous) {
}

void UItemTalismanColdBlood::OnMultiplayerNpcSelected(AHero* _NPC, ENpcType _NPCType) {
}

void UItemTalismanColdBlood::OnCompanionDespawn(UAshenEventData* AshenEventData) {
}

TArray<FUIStatBarData> UItemTalismanColdBlood::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanColdBlood::UItemTalismanColdBlood() {
    this->DamagePerCompanionDeath = 10.00f;
    this->MaxDamage = 50.00f;
    this->ColdBloodBuffEffectClass = NULL;
    this->RemoteHero = NULL;
    this->CurrentNpcType = ENpcType::None;
    this->TalismanBuffEffect = NULL;
}

