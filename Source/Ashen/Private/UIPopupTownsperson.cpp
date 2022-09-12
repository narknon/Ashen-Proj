#include "UIPopupTownsperson.h"

class UUIPlayerHud;
class UTextBlock;
class UUIPhase2OverlayMenu;

void UUIPopupTownsperson::SetupWidgets(UTextBlock* Text, UTextBlock* Text2) {
}

void UUIPopupTownsperson::SetupNextAnimation() {
}


void UUIPopupTownsperson::QueueNew(FOverlayTownPersonInput Type, UUIPlayerHud* PlayerHudRef, UUIPhase2OverlayMenu* NewOwner) {
}

void UUIPopupTownsperson::PlayNext() {
}



void UUIPopupTownsperson::OnAnimationsFinished() {
}

void UUIPopupTownsperson::MenuOpened() {
}

void UUIPopupTownsperson::BeginCloseAnims() {
}

UUIPopupTownsperson::UUIPopupTownsperson() {
    this->WidgetOpen = false;
    this->Owner = NULL;
    this->TextRef = NULL;
    this->TextRef2 = NULL;
    this->HUDRef = NULL;
}

