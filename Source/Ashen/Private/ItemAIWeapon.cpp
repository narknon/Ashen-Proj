#include "ItemAIWeapon.h"

class APhysicalItem;

void UItemAIWeapon::Tick(float DeltaSeconds) {
}

APhysicalItem* UItemAIWeapon::MakePhysicalItem() {
    return NULL;
}

void UItemAIWeapon::EnableWeaponCollision(const FString& ColliderKey) {
}

void UItemAIWeapon::DisableWeaponCollision(const FString& ColliderKey) {
}

UItemAIWeapon::UItemAIWeapon() {
    this->ReloadMontage = NULL;
    this->bIsMeleeWeapon = false;
    this->bIsRangedWeapon = false;
    this->bHasThrown = false;
}

