#include "AIPathMoveRequestSettings.h"

FAIPathMoveRequestSettings::FAIPathMoveRequestSettings() {
    this->MoveSpeed = EMovementSpeedDescription::MOVE_None;
    this->MoveSpeedMultiplier = 0.00f;
    this->AcceptableWaypointRadius = 0.00f;
    this->AcceptableGoalRadius = 0.00f;
    this->bAddCapsuleRadToAcceptableRad = false;
    this->bAutoOrientToMovement = false;
    this->bAllowPartialPath = false;
    this->bStopOnGoalOverlap = false;
    this->bTurnToMoveDirectionAtStart = false;
    this->bTurnForAvoidence = false;
    this->bHaltVelocityOnFinish = false;
    this->bPreferNavWalking = false;
    this->bProjectGoalLocation = false;
    this->bUseCombatNavFilter = false;
}

