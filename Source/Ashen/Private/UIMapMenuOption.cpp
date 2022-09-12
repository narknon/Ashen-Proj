#include "UIMapMenuOption.h"

class UImage;
class UHorizontalBox;
class UTextBlock;
class UUserWidget;

void UUIMapMenuOption::SetupComponents_MapUI(UHorizontalBox* _SelectCanvas, TArray<UTextBlock*> _TextRenderer, UImage* _HoverHighlight, UImage* _HoverHighlight2, UUserWidget* _GlowComponent, UImage* _PressHighlight, UUserWidget* NewImage, UImage* QuestImage, UImage* NewQuestImageGlow) {
}


void UUIMapMenuOption::SetSelected(bool Selected) {
}

void UUIMapMenuOption::SetQuestIcon(bool Visible, bool ActiveColours) {
}

void UUIMapMenuOption::SetPressed(bool Pressed) {
}


void UUIMapMenuOption::SetNew() {
}

void UUIMapMenuOption::SetGlow(bool Visible) {
}

void UUIMapMenuOption::SelectThisTravelPoint(bool Select) {
}

void UUIMapMenuOption::SelectThisNPC(bool Select) {
}


void UUIMapMenuOption::ClearNew() {
}

UUIMapMenuOption::UUIMapMenuOption() {
    this->NPCButtonType = ENpcType::None;
    this->AttachedMapIcon = NULL;
    this->NewImageRef = NULL;
    this->ActiveQuestImage = NULL;
    this->QuestImageGlow = NULL;
    this->SelectedNPC = false;
}

