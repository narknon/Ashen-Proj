#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "EEquipmentState.h"
#include "ToggleEquipmentAction.generated.h"

class UItemEquipment;

UCLASS(Blueprintable)
class ASHEN_API AToggleEquipmentAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemEquipment* CurrentLeftEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemEquipment* CurrentRightEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOnSecondAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EEquipmentState SetStateTo;
    
    AToggleEquipmentAction();
};

