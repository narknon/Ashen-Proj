#include "ItemRelicBase.h"

void UItemRelicBase::OwnerRested() {
}

void UItemRelicBase::OnShowRelic_Implementation() {
}

void UItemRelicBase::OnOwnerRested_Implementation() {
}

void UItemRelicBase::OnHideRelic_Implementation() {
}

bool UItemRelicBase::IsRelicHidden() const {
    return false;
}

TArray<FUIStatBarData> UItemRelicBase::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemRelicBase::UItemRelicBase() {
}

