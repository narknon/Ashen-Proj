#include "DestructibleProp.h"
#include "DestructibleComponent.h"

ADestructibleProp::ADestructibleProp() {
    this->DestructibleComponent = CreateDefaultSubobject<UDestructibleComponent>(TEXT("DestructibleComponent0"));
}

