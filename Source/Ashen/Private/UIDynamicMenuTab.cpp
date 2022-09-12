#include "UIDynamicMenuTab.h"

class UVerticalBox;
class AHero;
class UUIDynamicMenuOption;

void UUIDynamicMenuTab::UpdateFunc(float DeltaTime) {
}

void UUIDynamicMenuTab::RemoveNonPlatformButtons(UVerticalBox* BoxRef) {
}

void UUIDynamicMenuTab::RecieveInteractionInputTab(const AHero* Hero, EInputUIEventTypes PressEvent, EInputPressType PressType) {
}

void UUIDynamicMenuTab::RecieveControlInputTab(const FVector2D& Input) {
}

void UUIDynamicMenuTab::GetButtons(UVerticalBox* BoxRef) {
}

void UUIDynamicMenuTab::DynamicMenuPressEvent(bool Pressed, bool FromMouse) {
}

void UUIDynamicMenuTab::ClearPressEvents() {
}

UUIDynamicMenuOption* UUIDynamicMenuTab::AnyButtonHasMouseOver() {
    return NULL;
}

UUIDynamicMenuTab::UUIDynamicMenuTab() {
    this->DissableStandardInputHandling = false;
    this->DissableUpDownNavigation = false;
    this->DisableRefocusUpdateWhileMouseLeftHeld = false;
}

