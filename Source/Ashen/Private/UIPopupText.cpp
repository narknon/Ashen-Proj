#include "UIPopupText.h"

class UUIPlayerHud;
class UTextBlock;
class UUserWidget;
class UUIPhase2OverlayMenu;

void UUIPopupText::SetupWidgets(UTextBlock* StandardText, UTextBlock* AltText, UUserWidget* StandardStyle, UUserWidget* AltStyle) {
}

void UUIPopupText::SetupNextAnimation() {
}

void UUIPopupText::QueueNew(FOverlayTextInput Type, UUIPlayerHud* PlayerHudRef, UUIPhase2OverlayMenu* NewOwner) {
}

void UUIPopupText::PlayNext() {
}



void UUIPopupText::OnAnimationsFinished() {
}

void UUIPopupText::MenuOpened() {
}

void UUIPopupText::BeginCloseAnims() {
}


UUIPopupText::UUIPopupText() {
    this->bRemoveFromParentOnAnimFinished = false;
    this->WidgetOpen = false;
    this->StandardTextRef = NULL;
    this->AltTextRef = NULL;
    this->StandardStyleRef = NULL;
    this->AltStyleRef = NULL;
    this->HUDRef = NULL;
    this->Owner = NULL;
}

