#pragma once
#include "CoreMinimal.h"
#include "PhysicalWeapon.h"
#include "PhysicalShield.generated.h"

UCLASS(Blueprintable)
class ASHEN_API APhysicalShield : public APhysicalWeapon {
    GENERATED_BODY()
public:
    APhysicalShield();
};

