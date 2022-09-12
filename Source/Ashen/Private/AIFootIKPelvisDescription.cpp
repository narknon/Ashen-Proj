#include "AIFootIKPelvisDescription.h"

FAIFootIKPelvisDescription::FAIFootIKPelvisDescription() {
    this->bUseEXSettings = false;
    this->PelvisLowerCorrectionRate = 0.00f;
    this->PelvisRiseCorrectionRate = 0.00f;
    this->PelvisStepLowerAlpha = 0.00f;
    this->PelvisStepUpperAlpha = 0.00f;
    this->PelvisSlopeLowerAlpha = 0.00f;
    this->PelvisSlopeUpperAlpha = 0.00f;
    this->PelvisOffsetMin = 0.00f;
    this->PelvisOffsetMax = 0.00f;
    this->PelvisLowerOffsetLimit = 0.00f;
    this->PelvisUpperOffsetLimit = 0.00f;
    this->HipTiltDifferenceLimit = 0.00f;
    this->HipTiltAngleMax = 0.00f;
    this->HipTiltRate = 0.00f;
    this->InclineTiltRate = 0.00f;
    this->InclineDescendTiltMod = 0.00f;
    this->InclineAscendTiltMod = 0.00f;
    this->bAlwaysTiltPelvisToIncline = false;
}

