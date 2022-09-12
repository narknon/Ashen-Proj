#pragma once
#include "CoreMinimal.h"
#include "EquipmentHandlingAction.h"
#include "DiasoraDismountAction.generated.h"

UCLASS(Blueprintable)
class ASHEN_API ADiasoraDismountAction : public AEquipmentHandlingAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CurrentlyHoldingDiasora;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreExistingFootIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreExistingGravityScale;
    
    ADiasoraDismountAction();
};

