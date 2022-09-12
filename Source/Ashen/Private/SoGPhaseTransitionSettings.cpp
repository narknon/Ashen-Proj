#include "SoGPhaseTransitionSettings.h"

FSoGPhaseTransitionSettings::FSoGPhaseTransitionSettings() {
    this->DamageTakenMultiplier = 0.00f;
    this->PhaseChangeHP = 0.00f;
    this->PhaseWeaponLengthIncrease = 0.00f;
    this->PreRootLurkMinTime = 0.00f;
    this->PostRootLurkMinTime = 0.00f;
    this->GrabFleaTeleportOffset = 0.00f;
    this->QuickPhaseChangeMontage = NULL;
    this->ToLurkMontage = NULL;
    this->FleaRootedMontage = NULL;
    this->FleaRootedLoopMontage = NULL;
    this->FleaGrabMontage = NULL;
    this->GrabFleaMontage = NULL;
    this->GrabbedFleaMontage = NULL;
    this->KillFleaMontage = NULL;
    this->FleaDeathMontage = NULL;
    this->ScionReactToFleaDeathMontage = NULL;
    this->FleaDeathLoopMontage = NULL;
    this->ScionCradleFleaMontage = NULL;
    this->ScionCradleFleaLoopMontage = NULL;
    this->FleaCradledMontage = NULL;
    this->FleaCradledLoopMontage = NULL;
}

