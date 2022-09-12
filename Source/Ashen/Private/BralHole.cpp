#include "BralHole.h"

class AHero;

void ABralHole::PulseFullLight() {
}

void ABralHole::OnStartFlushOccupant_Implementation() {
}

void ABralHole::OnSequenceFailed_Implementation() {
}

void ABralHole::OnSequenceComplete_Implementation(uint8 SequenceIndex, AHero* Activator) {
}

void ABralHole::OnPillarFallen_Implementation() {
}

bool ABralHole::IsOccupied() const {
    return false;
}

bool ABralHole::IsHeroLookingAtHole(AHero* CheckHero) const {
    return false;
}

bool ABralHole::IsFlushingOccupant() const {
    return false;
}

void ABralHole::DoneFlushingOccupant() {
}

ABralHole::ABralHole() {
    this->bIsOccupied = false;
    this->FullLightValue = 0.00f;
    this->LightValue = 0.60f;
    this->bFullHoleLight = false;
    this->bMakeFullLight = false;
    this->LightRecieverPoint = NULL;
    this->LookActivationThreshold = 0.00f;
    this->LightIncreaseSpeed = 21.00f;
    this->LightDecreaseSpeed = 10.00f;
    this->LanternLooseLightDistance = 150.00f;
    this->LanternEffectorRange = 350.00f;
    this->CurrentTriangle = 0;
    this->SequenceFailedDelay = 3.00f;
    this->SequenceThreshold1 = 0.45f;
    this->SequenceThreshold2 = 0.33f;
    this->TriangleDelayTime = 0.35f;
    this->AudioSource = NULL;
    this->HoleSubTriangle = NULL;
    this->HoleSequenceComplete = NULL;
}

