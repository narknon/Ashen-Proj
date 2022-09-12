#include "Forgone.h"

class ACreature;

bool AForgone::CanBeLockedOnto(const ACreature* Observer) const {
    return false;
}

AForgone::AForgone() {
    this->AshCoverCurveName = TEXT("ForgoneAshCoverage");
    this->AshCoverMatParaName = TEXT("ForgoneAshFade");
}

