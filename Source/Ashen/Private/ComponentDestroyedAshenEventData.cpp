#include "ComponentDestroyedAshenEventData.h"

class UPrimitiveComponent;

UPrimitiveComponent* UComponentDestroyedAshenEventData::GetComponent() {
    return NULL;
}

UComponentDestroyedAshenEventData::UComponentDestroyedAshenEventData() {
    this->Component = NULL;
}

