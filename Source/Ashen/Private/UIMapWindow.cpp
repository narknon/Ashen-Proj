#include "UIMapWindow.h"
#include "Templates/SubclassOf.h"

class UUIMapAreasWidget;

TSubclassOf<UUIMapAreasWidget> UUIMapWindow::OnGetMapAreasWidget() {
    return NULL;
}

UUIMapWindow::UUIMapWindow() {
    this->CurrentMapAreaWidget = NULL;
    this->MapAreasWidget = NULL;
    this->Owner = NULL;
    this->CanApplyAdditionalTexture = false;
    this->MapTextureAdditionIndex = 0;
}

