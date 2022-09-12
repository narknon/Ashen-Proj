#include "AIContextMarker.h"
#include "Components/BillboardComponent.h"

AAIContextMarker::AAIContextMarker() {
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardVisual"));
    this->Radius = 30.00f;
    this->bSnapToGround = true;
    this->bRestOnGround = true;
    this->bForceDrawDebugInEditor = true;
    this->bForceDrawDebugInPIE = false;
}

