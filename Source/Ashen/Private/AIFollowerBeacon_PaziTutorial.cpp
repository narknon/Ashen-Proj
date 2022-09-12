#include "AIFollowerBeacon_PaziTutorial.h"

AAIFollowerBeacon_PaziTutorial::AAIFollowerBeacon_PaziTutorial() {
    this->OutsideCaveWaitMarker = NULL;
    this->MinLocalPingTime = 30.00f;
    this->MinObjectivePingTime = 30.00f;
    this->MinPingTime = 5.00f;
    this->BreakTownWaitOnHostileDist = 200.00f;
    this->BreakRockWaitOnMinDist = 300.00f;
    this->MaxBoundsDistanceFromBeacon = 0.00f;
    this->MinPlayerHeightForBounds = 0.00f;
    this->IntroSitLoop = NULL;
    this->IntroSitEnd = NULL;
    this->CaveExitSitLoop = NULL;
    this->CaveExitSitEnd = NULL;
    this->OOBIdleStart = NULL;
    this->OOBIdleLoop = NULL;
    this->OOBIdleEnd = NULL;
}

