#include "TutorialChecker.h"

class AAshenBaseGameState;

void UTutorialChecker::Setup(AAshenBaseGameState* BaseState, ECheckerCategory Category) {
}

void UTutorialChecker::SetActive(bool _Active) {
}

bool UTutorialChecker::IsUIType() {
    return false;
}

FUITutorialData UTutorialChecker::GetUIData() {
    return FUITutorialData{};
}

FTutorialData UTutorialChecker::GetSTDData() {
    return FTutorialData{};
}

void UTutorialChecker::GetProgress_Implementation(bool& ShouldShow, int32& ProgressMade, int32& TotalProgress) {
}

void UTutorialChecker::Complete() {
}

void UTutorialChecker::CleanUp() {
}

UTutorialChecker::UTutorialChecker() {
    this->TutorialManager = NULL;
    this->UIType = false;
}

