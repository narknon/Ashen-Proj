#include "LevelEventCallback.h"

void ULevelEventCallback::OnLevelUnloaded() {
}

void ULevelEventCallback::OnLevelShown() {
}

void ULevelEventCallback::OnLevelReload() {
}

void ULevelEventCallback::OnLevelLoaded() {
}

void ULevelEventCallback::OnLevelHidden() {
}

ULevelEventCallback::ULevelEventCallback() {
    this->StreamingLevel = NULL;
}

