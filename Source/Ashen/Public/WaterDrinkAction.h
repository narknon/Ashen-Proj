#pragma once
#include "CoreMinimal.h"
#include "EquipmentHandlingAction.h"
#include "WaterDrinkAction.generated.h"

class AWaterPool;

UCLASS(Blueprintable)
class ASHEN_API AWaterDrinkAction : public AEquipmentHandlingAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWaterPool* WaterPool;
    
    AWaterDrinkAction();
};

