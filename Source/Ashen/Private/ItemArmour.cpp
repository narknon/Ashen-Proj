#include "ItemArmour.h"

class UPaperSprite;

void UItemArmour::WearArmour(bool& bSwitched, bool ChangePhysicsOnly) {
}

EArmourWeight UItemArmour::GetWeight() const {
    return EArmourWeight::Light;
}

TArray<FUIStatBarData> UItemArmour::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

UPaperSprite* UItemArmour::GetIcon() {
    return NULL;
}

UItemArmour::UItemArmour() {
    this->WardrobeMeshMale = NULL;
    this->WardrobeMeshFemale = NULL;
    this->PhysicsAliveMale = NULL;
    this->PhysicsDeadMale = NULL;
    this->PhysicsAliveFemale = NULL;
    this->PhysicsDeadFemale = NULL;
    this->bHideHairOnUse = false;
    this->MultiplierGiveDamage = 1.00f;
    this->MultiplierTakeDamage = 1.00f;
    this->MultiplierStaminaUsage = 1.00f;
    this->MultiplierStaminaRegen = 1.00f;
    this->MultiplierRunSpeed = 1.00f;
    this->PoiseValue = 0.00f;
    this->bScaleMeshToDefaultHeight = false;
    this->Female_Icon = NULL;
    this->bEnablesFlokirIKHack = false;
    this->Weight = EArmourWeight::Light;
    this->bIsWorn = false;
}

