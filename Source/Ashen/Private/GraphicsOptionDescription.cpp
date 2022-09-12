#include "GraphicsOptionDescription.h"

FGraphicsOptionDescription::FGraphicsOptionDescription() {
    this->MenuGroup = EGraphicsMenuGroup::None;
    this->DisplayOrder = 0;
    this->bCommandArgumentsAreTogglePair = false;
    this->TypeOfOption = EGraphicsOptionType::Normal;
    this->SubMenuButtonType = EGraphicsMenuGroup::None;
}

