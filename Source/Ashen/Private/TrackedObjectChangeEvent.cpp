#include "TrackedObjectChangeEvent.h"

EQuestItem UTrackedObjectChangeEvent::GetTrackedItem() {
    return EQuestItem::Undefined;
}

FGameplayTag UTrackedObjectChangeEvent::GetTrackedCreature() {
    return FGameplayTag{};
}

UTrackedObjectChangeEvent::UTrackedObjectChangeEvent() {
    this->QuestItemType = EQuestItem::Undefined;
}

