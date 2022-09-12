#include "UIRebindingMenuOption.h"

class UImage;
class UHorizontalBox;
class UTextBlock;
class UUserWidget;

void UUIRebindingMenuOption::SetupComponents(UHorizontalBox* _SelectCanvas, TArray<UTextBlock*> _TextRenderer, UUserWidget* _GlowComponent, UImage* _HoverHighlight, UImage* _PressHighlight) {
}

void UUIRebindingMenuOption::SetSelected(bool Selected) {
}

void UUIRebindingMenuOption::SetPressed(bool Pressed) {
}

void UUIRebindingMenuOption::SetGlow(bool Visible) {
}

UUIRebindingMenuOption::UUIRebindingMenuOption() {
    this->KeyCategory = EUIRebindingButtonTypes::KeyBinding;
    this->RebindSelectorType = NULL;
}

