#include "AITimeSyncedPathPoint.h"
#include "Components/BillboardComponent.h"
#include "Components/SphereComponent.h"

AAITimeSyncedPathPoint::AAITimeSyncedPathPoint() {
    this->bPathingPointOnly = false;
    this->ExtraRestTime = 0;
    this->RestBehaviorTree = NULL;
    this->ParentPath = NULL;
    this->NextPoint = NULL;
    this->ArrivalTime = 0;
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardVisual"));
    this->SpherePoint = CreateDefaultSubobject<USphereComponent>(TEXT("FloorSphere"));
}

