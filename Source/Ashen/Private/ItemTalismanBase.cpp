#include "ItemTalismanBase.h"

class AHero;

void UItemTalismanBase::TalismanUnequipped() {
}

void UItemTalismanBase::TalismanInternalStateChanged() {
}

void UItemTalismanBase::TalismanEquipped(AHero* _Hero) {
}



bool UItemTalismanBase::IsTalismanEquiped() {
    return false;
}

TArray<FUIStatBarData> UItemTalismanBase::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanBase::UItemTalismanBase() {
    this->Hero = NULL;
    this->TalismanTier = ETalismanTier::None;
    this->TalismanType = ETalismanType::None;
}

