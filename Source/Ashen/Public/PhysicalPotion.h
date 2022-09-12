#pragma once
#include "CoreMinimal.h"
#include "PhysicalConsumable.h"
#include "PhysicalPotion.generated.h"

UCLASS(Blueprintable)
class ASHEN_API APhysicalPotion : public APhysicalConsumable {
    GENERATED_BODY()
public:
    APhysicalPotion();
};

