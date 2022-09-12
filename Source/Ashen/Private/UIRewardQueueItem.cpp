#include "UIRewardQueueItem.h"

class UPaperSprite;



UPaperSprite* UUIRewardQueueItem::GetItemIcon() const {
    return NULL;
}

UUIRewardQueueItem::UUIRewardQueueItem() {
    this->RewardItem = NULL;
    this->ItemClass = NULL;
    this->RewardType = ERewardType::None;
    this->RewardAmount = 0;
    this->ItemAlpha = 0.00f;
}

