#include "UIQuestInstructionRecap.h"

class UAshenEventData;

void UUIQuestInstructionRecap::UpdateQuestInstructionRecap_Implementation(bool bDisplayUpdateFlash) {
}


void UUIQuestInstructionRecap::OnUpdateFlashEnded_Implementation() {
}

void UUIQuestInstructionRecap::OnSelectedNpcChanged(UAshenEventData* EventData) {
}

void UUIQuestInstructionRecap::OnQuestStateChange(UAshenEventData* EventData) {
}



void UUIQuestInstructionRecap::DisplayUpdateFlash_Implementation() {
}

UUIQuestInstructionRecap::UUIQuestInstructionRecap() {
    this->UpdateFlashDisplayTime = 0.00f;
    this->UpdateFlashInitialAlpha = 0.00f;
    this->HighlightColourCurve = NULL;
    this->EdgeHighlightAlphaCurve = NULL;
    this->FlyInDistance = 0.00f;
    this->FlyInTime = 0.00f;
    this->CompasssPointLockTime = 0.00f;
    this->CachedUpdateFlashAlpha = 0.00f;
    this->CachedEdgeHighlightOpacity = 0.00f;
    this->QuestUpdatedAudioEvent = NULL;
    this->bShouldFlashOnUpdate = false;
}

