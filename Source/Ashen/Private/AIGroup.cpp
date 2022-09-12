#include "AIGroup.h"
#include "Components/TextRenderComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/SphereComponent.h"

AAIGroup::AAIGroup() {
    this->TextRender = CreateDefaultSubobject<UTextRenderComponent>(TEXT("BillboardTextRender"));
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardVisual"));
    this->bUnlimitedAllyAlertRange = false;
    this->bAlwaysSilentAlert = false;
    this->AllyAlertDelay = 0.00f;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponentRoot"));
}

