#include "UITalisman.h"

class UItemTalismanBase;
class UImage;
class UButton;

void UUITalisman::SetTalisman(UItemTalismanBase* Talisman, bool Animate) {
}

void UUITalisman::SetSelected(bool Selected) {
}

void UUITalisman::SetFill(bool Visible) {
}





void UUITalisman::OnClick() {
}

void UUITalisman::ConfigureWidgetsButton(UImage* Empty, UImage* EmptyLocked, UImage* EmptyLock, UImage* Equipped, UImage* Icon, UImage* Selected, UImage* Fill, UButton* Button, UImage* Lock) {
}

UUITalisman::UUITalisman() {
    this->AttachedTalisman = NULL;
    this->OwnerWidget = NULL;
    this->TalismanIndex = 0;
    this->MajorType = false;
    this->CanShowActiveStatus = false;
    this->ActiveStatus = false;
    this->LockedStatus = false;
    this->WidgetEmpty = NULL;
    this->WidgetEmptyLocked = NULL;
    this->WidgetEmptyLock = NULL;
    this->WidgetEquipped = NULL;
    this->WidgetIcon = NULL;
    this->WidgetSelected = NULL;
    this->WidgetFill = NULL;
    this->WidgetButton = NULL;
    this->WidgetLockIcon = NULL;
}

