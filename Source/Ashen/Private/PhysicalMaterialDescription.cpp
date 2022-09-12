#include "PhysicalMaterialDescription.h"

FPhysicalMaterialDescription::FPhysicalMaterialDescription() {
    this->PhysicalMaterial = NULL;
    this->SurfaceType = ESurfaceType::Ash;
    this->WalkParticles = NULL;
    this->ImpactFeedbackProfile = EFeedbackInput::None;
    this->FootprintDecalHumanoid = NULL;
    this->RollParticles = NULL;
}

