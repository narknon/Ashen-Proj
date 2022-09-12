#include "LadderAction.h"

void ALadderAction::SprintUp() {
}

void ALadderAction::SlideDown() {
}

void ALadderAction::DropFromLadder() {
}

void ALadderAction::Drop() {
}

void ALadderAction::ClimbUp() {
}

void ALadderAction::ClimbStop() {
}

void ALadderAction::ClimbDown() {
}

ALadderAction::ALadderAction() {
    this->StartMontage = NULL;
    this->MaxClimbMontages = 0;
    this->CurrentClimbMontages = 0;
    this->CurrentLadderState = ELadderState::None;
    this->PendingLadderState = ELadderState::ClimbIdle;
    this->bLoopClimb = false;
    this->LoopState = ELadderState::None;
    this->NavLink = NULL;
    this->PathFollowingComp = NULL;
}

