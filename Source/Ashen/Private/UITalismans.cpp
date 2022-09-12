#include "UITalismans.h"

class UUITalisman;
class UItemTalismanBase;
class UUIItemGridSlot;
class UImage;

void UUITalismans::SelectTalisman(UUITalisman* TalismanSlot) {
}

bool UUITalismans::RemoveTalismanFromSlot(UUITalisman* SlotData) {
    return false;
}

bool UUITalismans::RemoveTalisman(UItemTalismanBase* Talisman) {
    return false;
}

void UUITalismans::PostConstruct() {
}

void UUITalismans::PopulateTalismanSlots(bool Animate) {
}

void UUITalismans::PopulateTalismanPrimarySlots(TArray<UImage*> SlotImages) {
}

bool UUITalismans::HasTalisman(UItemTalismanBase* Talisman) {
    return false;
}

UUITalisman* UUITalismans::GetFreeSlot(UItemTalismanBase* Talisman) {
    return NULL;
}


bool UUITalismans::AddTalismanToSlot(UUITalisman* SlotData, UItemTalismanBase* Talisman) {
    return false;
}

void UUITalismans::ActionGridSlot(UUIItemGridSlot* SlotData, bool bActionSlot) {
}

UUITalismans::UUITalismans() {
    this->CurrentSlot = NULL;
    this->CurrentTalismanSlot = 0;
    this->WidgetTitle = NULL;
    this->WidgetDescription = NULL;
    this->Hero = NULL;
}

