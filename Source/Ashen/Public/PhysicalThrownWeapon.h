#pragma once
#include "CoreMinimal.h"
#include "PhysicalWeapon.h"
#include "PhysicalThrownWeapon.generated.h"

UCLASS(Blueprintable)
class ASHEN_API APhysicalThrownWeapon : public APhysicalWeapon {
    GENERATED_BODY()
public:
    APhysicalThrownWeapon();
};

