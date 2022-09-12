#include "ItemTalismanRecluse.h"

void UItemTalismanRecluse::OnMultiplayerActionAttempt(bool& bCanSolo) {
}

TArray<FUIStatBarData> UItemTalismanRecluse::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UItemTalismanRecluse::UItemTalismanRecluse() {
    this->GameState = NULL;
}

