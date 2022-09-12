#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_HasWeaponEquipped.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_HasWeaponEquipped : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysSucceedIfNoAvailableWeapons;
    
    UBTD_HasWeaponEquipped();
};

