#include "UIQuestNotification.h"


void UUIQuestNotification::ShowAsQuestStarted(const FText& QuestName) {
}

void UUIQuestNotification::ShowAsQuestComplete(const FText& QuestName) {
}

void UUIQuestNotification::EnableNotificationDisplay_Implementation() {
}

UUIQuestNotification::UUIQuestNotification() {
    this->NotificationOpacityCurve = NULL;
    this->NotificationScaleCurve = NULL;
    this->CachedWidgetOpacity = 0.00f;
    this->QuestCompleteEffectDelay = 0.00f;
    this->QuestCompleteNotificationDelay = 0.00f;
    this->QuestCompleteRecapTextLockDuration = 0.00f;
    this->QuestStartedRecapTextLockDuration = 0.00f;
    this->ScreenFlashDuration = 0.00f;
    this->ScreenFlashInitialOpacity = 0.00f;
    this->QuestAcceptedAudioEvent = NULL;
}

