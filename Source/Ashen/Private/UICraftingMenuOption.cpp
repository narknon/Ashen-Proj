#include "UICraftingMenuOption.h"

class UUserWidget;
class UUIItemGridSlot;
class UImage;
class UHorizontalBox;
class UTextBlock;
class UItemBase;
class UUITalisman;

void UUICraftingMenuOption::UnmarkItemAsNew(ENpcType CraftingNpc) {
}

void UUICraftingMenuOption::SetupComponents_CraftingUI(UHorizontalBox* _SelectCanvas, TArray<UTextBlock*> _TextRenderer, UUserWidget* Highlight, UImage* _PressHighlight, UImage* _Glow, UUIItemGridSlot* _ItemSlot, UUITalisman* NewTalismanSlot, UItemBase* _ItemRef) {
}

void UUICraftingMenuOption::SetSelected(bool Selected) {
}

void UUICraftingMenuOption::SetPressed(bool Pressed) {
}

void UUICraftingMenuOption::SetGlow(bool Visible) {
}


UUICraftingMenuOption::UUICraftingMenuOption() {
    this->ItemSlot = NULL;
    this->TalismanSlot = NULL;
    this->TalismanType = false;
    this->ItemRef = NULL;
    this->GlowImage = NULL;
    this->HighlightRef = NULL;
}

