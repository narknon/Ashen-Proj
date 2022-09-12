#pragma once
#include "CoreMinimal.h"
#include "EquipmentHandlingAction.h"
#include "OpenSoGDoorAction.generated.h"

class UAnimMontage;
class ASoGDoor;

UCLASS(Blueprintable)
class ASHEN_API AOpenSoGDoorAction : public AEquipmentHandlingAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PushOpenDoorMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASoGDoor* SoGDoor;
    
    AOpenSoGDoorAction();
};

