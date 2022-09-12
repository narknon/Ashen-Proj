#include "UICompassPoint.h"


void UUICompassPoint::UpdateFunction(float DeltaTime) {
}

void UUICompassPoint::SetupInZoneAndAlpha(float DeltaTime) {
}

void UUICompassPoint::SetPosition() {
}

void UUICompassPoint::SetIconType(bool InTown) {
}




bool UUICompassPoint::OverridePlayerLocationWithLockedValue(FVector& Location) {
    return false;
}

UUICompassPoint::UUICompassPoint() {
    this->QuestPointOwner = NULL;
    this->PathFindingPoint = NULL;
    this->CompassRefrence = NULL;
    this->CompassPointAlpha = 0.00f;
    this->CompassPointEdgeAlpha = 0.00f;
    this->InZone = false;
    this->InTownType = false;
    this->ImageWidget = NULL;
}

