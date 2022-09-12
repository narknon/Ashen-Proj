#include "AnimNode_SpeedWarping.h"

FAnimNode_SpeedWarping::FAnimNode_SpeedWarping() {
    this->WarpIntensity = 0.00f;
    this->WarpRatio = 0.00f;
    this->bTakeRotationFromEffectorSpace = false;
    this->bMaintainEffectorRelRot = false;
    this->bAllowStretching = false;
    this->JointTargetLocationSpace = BCS_WorldSpace;
    this->EffectorLocationSpace = BCS_WorldSpace;
    this->bEnableDebugDraw = false;
}

