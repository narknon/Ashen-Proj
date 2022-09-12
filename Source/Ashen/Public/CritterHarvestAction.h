#pragma once
#include "CoreMinimal.h"
#include "EquipmentHandlingAction.h"
#include "CritterHarvestAction.generated.h"

class ASmallGroundCritter;

UCLASS(Blueprintable)
class ASHEN_API ACritterHarvestAction : public AEquipmentHandlingAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASmallGroundCritter* TargetCritter;
    
    ACritterHarvestAction();
};

