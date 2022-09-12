#include "BTT_Follower_TeleportToHero.h"

UBTT_Follower_TeleportToHero::UBTT_Follower_TeleportToHero() {
    this->TeleportDistanceMin = 0.00f;
    this->TeleportDistanceMax = 100.00f;
    this->TeleportHalfAngle = 20.00f;
    this->TeleportTestZOffset = 50.00f;
    this->TeleportDistToHero = 0.00f;
    this->bTeleportIfNoPathToHero = false;
    this->bTeleportIfFollowerOffNav = false;
    this->bTeleportAlways = false;
    this->bForceTeleportIfNoNavAtDest = false;
}

