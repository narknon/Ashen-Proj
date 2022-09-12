#include "StoryAction.h"

class UAnimMontage;
class AAction;

void AStoryAction::Start() {
}

void AStoryAction::OnMontageEnded(UAnimMontage* _Montage, bool bInterrupted) {
}

bool AStoryAction::Interrupt(AAction* InterruptingAction) {
    return false;
}

void AStoryAction::Cancel() {
}

AStoryAction::AStoryAction() {
    this->PathFollowingComp = NULL;
}

