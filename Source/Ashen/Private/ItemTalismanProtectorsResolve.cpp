#include "ItemTalismanProtectorsResolve.h"

class AHero;
class UAshenEventData;
class AActor;
class UVitalAttributes;

void UItemTalismanProtectorsResolve::OnNpcDeath(AActor* _Parent, UVitalAttributes* _Source) {
}

void UItemTalismanProtectorsResolve::OnNpcAcquired(UAshenEventData* EventData) {
}

void UItemTalismanProtectorsResolve::OnMultiplayerLost(UAshenEventData* EventData) {
}

void UItemTalismanProtectorsResolve::OnMultiplayerFinalised(AHero* _NPC, ENpcType _NPCType) {
}

TArray<FUIStatBarData> UItemTalismanProtectorsResolve::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

int32 UItemTalismanProtectorsResolve::GetHealthBonus() {
    return 0;
}

UItemTalismanProtectorsResolve::UItemTalismanProtectorsResolve() {
    this->HealthBonusPerNpc = 0;
    this->MaxHealhBonus = 0;
    this->MinDistance = 0.00f;
    this->MinTimeConnected = 0.00f;
    this->isLocked = false;
    this->NumOfNpcsInTown = 0;
    this->CurrentHealthBonus = 0;
    this->NpcActor = NULL;
    this->CurrentNpcType = ENpcType::None;
    this->ConnectionTimer = 0.00f;
}

