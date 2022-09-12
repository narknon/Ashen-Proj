#include "ItemThrownWeapon.h"

bool UItemThrownWeapon::SetupAndCheckRecentChargesChange() {
    return false;
}

int32 UItemThrownWeapon::GetUIStackAmountInternal() {
    return 0;
}

TArray<FUIStatBarData> UItemThrownWeapon::GetItemUIStatBars(bool SkipCustomization) {
    return TArray<FUIStatBarData>();
}

void UItemThrownWeapon::CanWeaponAttack(bool& _b) {
}

UItemThrownWeapon::UItemThrownWeapon() {
    this->AimingOffset = NULL;
    this->CurrentCharges = 0;
    this->MaxCharges = 0;
    this->PreviousChargeAmount = 0;
    this->PendingDelete = false;
}

