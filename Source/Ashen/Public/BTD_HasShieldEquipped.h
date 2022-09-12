#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTD_HasShieldEquipped.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_HasShieldEquipped : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysSucceedIfNoShield;
    
    UBTD_HasShieldEquipped();
};

