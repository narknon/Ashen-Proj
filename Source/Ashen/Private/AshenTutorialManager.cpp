#include "AshenTutorialManager.h"
#include "Templates/SubclassOf.h"

class UAshenEventData;
class UTutorialChecker;

bool UAshenTutorialManager::ShouldDisplayTutorials() {
    return false;
}

void UAshenTutorialManager::SetHighestPriorityCombatTutorialType(ETrackedPlayerEvent EventName) {
}

void UAshenTutorialManager::ResetTutorials() {
}

void UAshenTutorialManager::OnUIOnOffSettingChange(UAshenEventData* Data) {
}

bool UAshenTutorialManager::IsTutorialOptionEnabled() {
    return false;
}

ETrackedPlayerEvent UAshenTutorialManager::GetHighestPriorityCombatTutorialType() {
    return ETrackedPlayerEvent::None;
}

UTutorialChecker* UAshenTutorialManager::GetHigherPriorityTutorial(bool UIType) {
    return NULL;
}

TArray<UTutorialChecker*> UAshenTutorialManager::GetCurrentTutorials() {
    return TArray<UTutorialChecker*>();
}

void UAshenTutorialManager::ClearOldTutorials() {
}

void UAshenTutorialManager::AddStandardTutorials() {
}

void UAshenTutorialManager::AddNewTutorial(TSubclassOf<UTutorialChecker> NewTutorial) {
}

UAshenTutorialManager::UAshenTutorialManager() {
    this->TutorialsEnabled = true;
    this->TimeSinceValidTutorial = 25.60f;
    this->CombatTutorialsStateRequired = ETrackedPlayerState::None;
    this->GameState = NULL;
    this->LocalHero = NULL;
    this->TutorialsAllowedCondition = NULL;
    this->TutorialsAllowedController = NULL;
    this->HighestPriorityCombatTutorialType = ETrackedPlayerEvent::None;
    this->AlertPartnerPromptDelay = 0.00f;
    this->ShareQuestPromptDelay = 20.00f;
    this->ShareQuestPromptLoopDelay = 300.00f;
}

