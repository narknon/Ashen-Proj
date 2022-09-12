#include "PhysicalItem.h"
#include "Components/SceneComponent.h"


APhysicalItem::APhysicalItem() {
    this->OwningItem = NULL;
    this->ItemRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ItemRoot"));
}

