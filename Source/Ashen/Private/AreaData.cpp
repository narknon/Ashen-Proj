#include "AreaData.h"

FAreaData::FAreaData() {
    this->DiscoveryType = EDiscoveryType::None;
    this->AreaNumber = 0;
    this->SubAreaNumber = 0;
    this->DungeonMapStyle = false;
    this->ShowUIPrompt = false;
    this->StartAsDiscovered = false;
    this->RequiredQuestLine = NULL;
}

