#include "UIDebugSpawnMenuOption.h"

class UImage;
class UHorizontalBox;
class UTextBlock;
class UUserWidget;

void UUIDebugSpawnMenuOption::SetupComponents(UHorizontalBox* _SelectCanvas, TArray<UTextBlock*> _TextRenderer, UUserWidget* _GlowComponent, UImage* _HoverHighlight, UImage* _PressHighlight) {
}

void UUIDebugSpawnMenuOption::SetSelected(bool Selected) {
}

void UUIDebugSpawnMenuOption::SetPressed(bool Pressed) {
}

void UUIDebugSpawnMenuOption::SetGlow(bool Visible) {
}

UUIDebugSpawnMenuOption::UUIDebugSpawnMenuOption() {
    this->bUseSpawnedClassTypeRefAsName = false;
}

