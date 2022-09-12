#include "EventAndStateChecker.h"

class AAshenBaseGameState;
class UAshenEventData;

FName UEventAndStateChecker::TrackAQuery(FPlayerEventsAndStateQuery Query) {
    return NAME_None;
}

void UEventAndStateChecker::StopTrackingAQuery(FName Query) {
}

void UEventAndStateChecker::Setup(AAshenBaseGameState* BaseState, ECheckerCategory Category) {
}

void UEventAndStateChecker::SetPriorityModifier(int32 Modifier) {
}

void UEventAndStateChecker::SetActive(bool _Active) {
}



bool UEventAndStateChecker::PreSetActiveCheck_Implementation(bool CurrentValue) {
    return false;
}



void UEventAndStateChecker::OnTrackedQuerySucessCallback(UAshenEventData* Data) {
}

void UEventAndStateChecker::OnTrackedQueryCallback(UAshenEventData* Data) {
}

void UEventAndStateChecker::OnTrackedPlayerStateCallback(UAshenEventData* Data) {
}

void UEventAndStateChecker::OnTrackedPlayerEventCallback(UAshenEventData* Data) {
}


int32 UEventAndStateChecker::GetPriority() {
    return 0;
}

FName UEventAndStateChecker::GetName() {
    return NAME_None;
}

ECheckerCategory UEventAndStateChecker::GetCategory() {
    return ECheckerCategory::None;
}

void UEventAndStateChecker::CoolOffTimeCompleted() {
}

void UEventAndStateChecker::CoolOff(float CoolOffTime) {
}

void UEventAndStateChecker::Complete() {
}

void UEventAndStateChecker::CleanUp() {
}

bool UEventAndStateChecker::AssosiatedTaskIsReady() {
    return false;
}

UEventAndStateChecker::UEventAndStateChecker() {
    this->Active = false;
    this->Active_IfNotOnCoolDown = false;
    this->OnCompleteCoolDownTime = 0.00f;
    this->ActiveChecker = false;
    this->Priority = 0;
    this->CheckerCategory = ECheckerCategory::None;
    this->GameStateRef = NULL;
    this->PlayerEventTracker = NULL;
    this->CleanupAfterCompletedXTimes = -1;
    this->PriorityModifier = 0;
    this->AshenStateSaveData = NULL;
    this->AshenGameInstance = NULL;
}

