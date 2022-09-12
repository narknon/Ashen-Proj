#include "UIStatBarData.h"

FUIStatBarData::FUIStatBarData() {
    this->BarType = EUIStatBarType::None;
    this->StatQuality = EItemQuality::Tier0;
    this->ModificationValue = 0;
    this->HasModificationValue = false;
}

