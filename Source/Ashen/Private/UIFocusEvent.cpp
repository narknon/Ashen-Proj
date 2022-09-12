#include "UIFocusEvent.h"

class UAshenUserWidget;

UAshenUserWidget* UUIFocusEvent::GetFocusedWidget() {
    return NULL;
}

UUIFocusEvent::UUIFocusEvent() {
    this->FocusedWidget = NULL;
}

