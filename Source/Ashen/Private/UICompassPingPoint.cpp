#include "UICompassPingPoint.h"

void UUICompassPingPoint::UpdateFunction(float InDeltaTime) {
}




UUICompassPingPoint::UUICompassPingPoint() {
    this->CompassRefrence = NULL;
    this->PointType = ECompassPointType::NotSet;
    this->NextPointType = ECompassPointType::NotSet;
    this->CompassPointAlpha = 0.00f;
    this->CompassPointEdgeAlpha = 0.00f;
    this->DisplayTimer = 0.00f;
    this->DisplayTime = 5.00f;
    this->WorldLocationOveride = false;
    this->ImageWidget = NULL;
    this->PingingActor = NULL;
    this->InTutorial = false;
}

