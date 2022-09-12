#include "UIInventoryMenu.h"

class UItemBase;

FLinearColor UUIInventoryMenu::GetItemTextColour(UItemBase* Item) {
    return FLinearColor{};
}

UUIInventoryMenu::UUIInventoryMenu() {
    this->bInLootBox = false;
    this->CraftingComponent = NULL;
    this->LootComponent = NULL;
    this->LootUIRef = NULL;
}

