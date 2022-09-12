#include "AshenAIAvoidenceComponent.h"

UAshenAIAvoidenceComponent::UAshenAIAvoidenceComponent() {
    this->SphereRadius = 0.00f;
    this->AvoidenceSmoothingRate = 180.00f;
    this->ToTargetVectorWeight = 1.00f;
    this->CreatureAvoidWeight = 8.00f;
    this->GeoFacingTraceLength = 128.00f;
    this->GeoFacingTraceWeight = 16.00f;
    this->GeoFacingTraceRadius = 0.00f;
    this->CliffTraceForwardLength = 20.00f;
    this->CliffTraceDownLength = 60.00f;
    this->CliffTraceAvoidWeight = 8.00f;
    this->MyCreature = NULL;
}

