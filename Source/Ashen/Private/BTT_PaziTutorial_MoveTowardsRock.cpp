#include "BTT_PaziTutorial_MoveTowardsRock.h"

UBTT_PaziTutorial_MoveTowardsRock::UBTT_PaziTutorial_MoveTowardsRock() {
    this->SpeedRunChangeMinTime = 1.00f;
    this->SpeedSprintChangeMinTime = 2.00f;
    this->SpeedMatchRadius = 500.00f;
    this->DropSpeedMatchRadius = 700.00f;
    this->SprintDelayTime = 3.00f;
    this->bWalkDuringSprintDelay = false;
    this->EndDistanceDropSprint = 300.00f;
    this->EndDistanceDropRun = 150.00f;
}

