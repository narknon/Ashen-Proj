#include "UIStatBuffData.h"

FUIStatBuffData::FUIStatBuffData() {
    this->IconType = EUIStatBuffIconType::None;
    this->TextType = EUIStatBuffTextType::None;
    this->StatAmount = 0;
    this->ModificationValue = 0;
    this->HasModificationValue = false;
}

