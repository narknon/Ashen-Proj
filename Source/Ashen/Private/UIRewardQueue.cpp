#include "UIRewardQueue.h"
#include "Templates/SubclassOf.h"

class UItemBase;

bool UUIRewardQueue::ShouldQueueHaveVisibility() {
    return false;
}




void UUIRewardQueue::OnAttributeReward_Implementation(ERewardType RewardType, int32 RewardAmount) {
}




void UUIRewardQueue::AddRewardQueueItem_Implementation(ERewardType RewardType, int32 RewardAmount, UItemBase* RewardItem, TSubclassOf<UItemBase> ClassOption) {
}

void UUIRewardQueue::AddNextQueueItemToScreen_Implementation() {
}

UUIRewardQueue::UUIRewardQueue() {
    this->UiQueueItemClass = NULL;
    this->ItemTimeOnScreen = 0.00f;
    this->ItemFlyOutTime = 0.00f;
    this->ItemFlyInTime = 0.00f;
    this->FlyInDistance = 0.00f;
    this->FlyOutRemovedDistance = 0.00f;
    this->TimeBetweenQueuedItemDisplay = 0.00f;
    this->MinimumTimeBetweenRemovingItems = 0.00f;
    this->DelayBeforeFirstItemAppears = 0.00f;
    this->FadeInCurve = NULL;
    this->FadeOutCurve = NULL;
    this->RewardFlashOpacityCurve = NULL;
    this->QuestItemPickupAudioEvent = NULL;
    this->bRewardFlashActive = false;
    this->CachedRewardFlashAlpha = 0.00f;
}

