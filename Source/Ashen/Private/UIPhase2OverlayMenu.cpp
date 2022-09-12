#include "UIPhase2OverlayMenu.h"

class UUIPhase2MenuTab;
class UItemBase;
class UAshenEventData;
class UItemTable;



void UUIPhase2OverlayMenu::SetOpenStatus(EUIPopupQueType Type, bool Opened) {
}


void UUIPhase2OverlayMenu::ResetTimeSinceDialogue() {
}

















void UUIPhase2OverlayMenu::OnQuestStateChanged(UAshenEventData* EventData) {
}

void UUIPhase2OverlayMenu::OnPlayerDamage(const FAshenDamage& DamageDescription) {
}

void UUIPhase2OverlayMenu::OnNpcAcquired(UAshenEventData* EventData) {
}

void UUIPhase2OverlayMenu::OnMPFinalized(UAshenEventData* EventData) {
}

void UUIPhase2OverlayMenu::OnItemRemoved(UItemTable* Source, UItemBase* ItemRef) {
}

void UUIPhase2OverlayMenu::OnItemAdded(UItemTable* Source, UItemBase* ItemRef) {
}

void UUIPhase2OverlayMenu::OnInventoryFull(UItemTable* Source, UItemBase* ItemRef) {
}

void UUIPhase2OverlayMenu::OnEnteredArea(UAshenEventData* EventData) {
}

void UUIPhase2OverlayMenu::OnActiveNPCchanged(UAshenEventData* EventData) {
}


bool UUIPhase2OverlayMenu::GetWaitNeeded(EUIPopupQueType Type) {
    return false;
}

TArray<EUIPopupQueType> UUIPhase2OverlayMenu::GetWaitList(EUIPopupQueType TabType) {
    return TArray<EUIPopupQueType>();
}













void UUIPhase2OverlayMenu::BuildWaitList() {
}

void UUIPhase2OverlayMenu::BindActionPopupOnClosure(UUIPhase2MenuTab* Tab, bool Remove) {
}




UUIPhase2OverlayMenu::UUIPhase2OverlayMenu() {
    this->PausePopupFadeIns = false;
    this->TimeSinceDialogue = 0.00f;
    this->ZoneDiscoveryDisplayTime = 0.00f;
}

