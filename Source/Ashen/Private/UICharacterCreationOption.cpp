#include "UICharacterCreationOption.h"

class UImage;
class UHorizontalBox;
class UTextBlock;
class UUserWidget;
class UPaperSprite;

void UUICharacterCreationOption::SetupComponents_CharCreation(UHorizontalBox* _SelectCanvas, TArray<UTextBlock*> _TextRenderer, UImage* _HoverHighlight, UImage* _BoarderImage, UUserWidget* _GlowComponent, UImage* _PressHighlight, UImage* _UnderscoreImage, UImage* _OptionImage, UImage* _OptionImageBoarder) {
}

void UUICharacterCreationOption::SetSelected(bool Selected) {
}

void UUICharacterCreationOption::SetPressed(bool Pressed) {
}

void UUICharacterCreationOption::SetIcon(UPaperSprite* Image) {
}

void UUICharacterCreationOption::SetGlow(bool Visible) {
}

void UUICharacterCreationOption::SelectThisOption(bool Select) {
}


UUICharacterCreationOption::UUICharacterCreationOption() {
    this->OptionImage = NULL;
    this->OptionImageBoarder = NULL;
    this->UnderscoreImage = NULL;
    this->BoarderImage = NULL;
    this->UseUnderscore = false;
    this->UseBoarder = false;
    this->UseIcon = false;
    this->SelectedOption = false;
    this->IconSprite = NULL;
}

