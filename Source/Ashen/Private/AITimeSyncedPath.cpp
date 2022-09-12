#include "AITimeSyncedPath.h"
#include "Components/BillboardComponent.h"

AAITimeSyncedPath::AAITimeSyncedPath() {
    this->TraversalSpeed = 0.00f;
    this->PathRadialWidth = 200.00f;
    this->StartTimeOffset = 0;
    this->RootPathPoint = NULL;
    this->DefaultFollowBehaviorTree = NULL;
    this->bForceDrawDebugInEditor = true;
    this->bForceDrawDebugInPIE = false;
    this->TotalPathDuration = 0;
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardVisual"));
}

