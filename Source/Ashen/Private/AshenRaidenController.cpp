#include "AshenRaidenController.h"

class ARaidenZone;


void AAshenRaidenController::RemoveZone(ARaidenZone* Zone) {
}

void AAshenRaidenController::AddZone(ARaidenZone* Zone) {
}

AAshenRaidenController::AAshenRaidenController() {
    this->bRunDebugger = false;
    this->DirectionalLight = NULL;
    this->DirectionalLightHighlands = NULL;
    this->SkyLight = NULL;
    this->HeightFog = NULL;
    this->SkydomeParameterCollection = NULL;
    this->FxParameterCollection = NULL;
    this->WindActor = NULL;
    this->TransitionCurve = NULL;
    this->CloudOpacityFoothills = 0.00f;
    this->CloudOpacityFjord = 0.00f;
    this->CloudOpacityHighlands = 0.00f;
    this->CloudOpacityTutorial = 0.00f;
    this->bOverrideRaidenInEditor = false;
    this->bKeepPostProcessOverridenInEditor = true;
    this->bLiveRaidenInEditor = false;
}

