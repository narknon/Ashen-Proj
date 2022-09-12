#include "ItemTalismanIndustrious.h"

TArray<FUIStatBarData> UItemTalismanIndustrious::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

void UItemTalismanIndustrious::ApplyStaminaPenaltyModifier(EArmourWeight ArmourWeight, float& CurrentValue) {
}

UItemTalismanIndustrious::UItemTalismanIndustrious() {
    this->HeavyArmourReductionMultiplier = 0.00f;
    this->MediumArmourReductionMultiplier = 0.00f;
    this->LightArmourReductionMultiplier = 0.00f;
}

