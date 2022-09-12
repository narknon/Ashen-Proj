#include "AnimNode_EvaluateMotionPose.h"

FAnimNode_EvaluateMotionPose::FAnimNode_EvaluateMotionPose() {
    this->CurveDistance = 0.00f;
    this->MotionTime = 0.00f;
    this->InverseWarpRatio = false;
    this->bNormalizePlayTime = false;
    this->CurveIndex = 0;
    this->UseMapping = false;
    this->bLoop = false;
    this->CancelRootMotionOnTargetRotation = false;
    this->MaxMapPlayRate = 0.00f;
    this->SimpleAnimInstance = NULL;
}

