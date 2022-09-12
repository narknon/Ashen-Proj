#include "AIFootIKDescription.h"

FAIFootIKDescription::FAIFootIKDescription() {
    this->bUseEXSettings = false;
    this->bAlwaysCastBothFootAndToe = false;
    this->FootDistanceToBase = 0.00f;
    this->FootRestDistanceToFloor = 0.00f;
    this->FootPlantDistance = 0.00f;
    this->ToeDistanceToBase = 0.00f;
    this->FootTraceRadius = 0.00f;
    this->FootLockCurveThreshold = 0.00f;
    this->FootUnlockBlendRate = 0.00f;
    this->FootUnlockTimeMin = 0.00f;
    this->FootLockAutoBreak2DDist = 0.00f;
    this->FootLockAutoBreakLimbExtent = 0.00f;
    this->FootLockAutoBreakRotation = 0.00f;
    this->FootStepTraceDistance = 0.00f;
    this->FootStepTraceOverStep = 0.00f;
    this->FootStepUpLimit = 0.00f;
    this->FootStepUpRate = 0.00f;
    this->FootStepDownLimit = 0.00f;
    this->FootStepDownRate = 0.00f;
    this->FootStepTargetInterpRate = 0.00f;
    this->FootStepUpTargetInterpBoost = 0.00f;
    this->FootStepDownAnimationWeight = 0.00f;
    this->FootStepUpAnimationWeight = 0.00f;
}

