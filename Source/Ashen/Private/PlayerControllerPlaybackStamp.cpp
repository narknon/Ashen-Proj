#include "PlayerControllerPlaybackStamp.h"

FPlayerControllerPlaybackStamp::FPlayerControllerPlaybackStamp() {
    this->bHasPlayed = false;
    this->CameraSpringLength = 0.00f;
    this->InputAxisMoveForward = 0.00f;
    this->InputAxisMoveRight = 0.00f;
    this->InputAxisTurn = 0.00f;
    this->InputAxisLookUp = 0.00f;
    this->InputAxisCameraTurnRate = 0.00f;
    this->InputAxisCameraLookUpRate = 0.00f;
    this->LightAttackPressed = false;
    this->LightAttackReleased = false;
    this->HeavyAttackPressed = false;
    this->HeavyAttackReleased = false;
    this->BlockPressed = false;
    this->BlockReleased = false;
    this->SecondaryAttackPressed = false;
    this->SecondaryAttackReleased = false;
    this->EvasionPressed = false;
    this->EvasionReleased = false;
    this->EquipRight = false;
    this->EquipLeft = false;
    this->EquipToggle = false;
    this->Time = 0.00f;
}

