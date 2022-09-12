#include "ItemDescription.h"

FItemDescription::FItemDescription() {
    this->Icon = NULL;
    this->Type = EItemType::None;
    this->Quality = EItemQuality::Tier0;
    this->Ideal = EItemIdeal::None;
    this->Behaviour = EItemBehaviour::Undefined;
    this->BaseWeight = 0.00f;
    this->StackLimit = 0;
    this->PluralType = EItemPluralityPreface::none;
    this->UI_Fanfare = EItemFanfare::None;
    this->InspectionMesh = NULL;
    this->InspectionScale = 0.00f;
}

