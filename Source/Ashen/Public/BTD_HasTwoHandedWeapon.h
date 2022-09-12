#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_HasTwoHandedWeapon.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_HasTwoHandedWeapon : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDrawn;
    
    UBTD_HasTwoHandedWeapon();
};

