#include "UIPopupTutorial.h"

class UUIPlayerHud;
class UTextBlock;
class UUIPhase2OverlayMenu;

void UUIPopupTutorial::SetupWidgets(UTextBlock* Text, UTextBlock* Text2) {
}


void UUIPopupTutorial::SetupNextAnimation() {
}

void UUIPopupTutorial::QueueNew(FOverlayTutorialInput Type, UUIPlayerHud* PlayerHudRef, UUIPhase2OverlayMenu* NewOwner) {
}

void UUIPopupTutorial::PlayNext() {
}



void UUIPopupTutorial::OnAnimationsFinished() {
}

void UUIPopupTutorial::MenuOpened() {
}

bool UUIPopupTutorial::IsStillValid() {
    return false;
}

void UUIPopupTutorial::BeginCloseAnims() {
}

UUIPopupTutorial::UUIPopupTutorial() {
    this->WidgetOpen = false;
    this->Owner = NULL;
    this->TextRef = NULL;
    this->TextRef2 = NULL;
    this->HUDRef = NULL;
}

