#include "AIFollowerMarker.h"
#include "Components/BillboardComponent.h"

AAIFollowerMarker::AAIFollowerMarker() {
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardVisual"));
    this->MarkerType = EAIFollowerMarkerType::None;
    this->MarkerMode = EAIFollowerMarkerMode::Sphere;
    this->bSnapToGround = true;
    this->bRestOnGround = true;
    this->bForceDrawDebugInEditor = true;
    this->bForceDrawDebugInPIE = false;
    this->AISpawnManager = NULL;
}

