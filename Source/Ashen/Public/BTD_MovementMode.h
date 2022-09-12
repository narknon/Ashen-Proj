#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "Engine/EngineTypes.h"
#include "BTD_MovementMode.generated.h"

UCLASS(Blueprintable)
class ASHEN_API UBTD_MovementMode : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> MovementMode;
    
    UBTD_MovementMode();
};

