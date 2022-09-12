#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "EquipAction.generated.h"

class UItemEquipment;

UCLASS(Blueprintable)
class ASHEN_API AEquipAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemEquipment* CurrentEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemEquipment* NextEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemEquipment* NextOffHandEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemEquipment* PreUnequipEquipment;
    
    AEquipAction();
};

