#pragma once
#include "CoreMinimal.h"
#include "EquipmentHandlingAction.h"
#include "OpenMatriarchDoorAction.generated.h"

class UAnimMontage;
class AMatriarchDoor;

UCLASS(Blueprintable)
class ASHEN_API AOpenMatriarchDoorAction : public AEquipmentHandlingAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PushOpenDoorMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMatriarchDoor* MatriarchDoor;
    
    AOpenMatriarchDoorAction();
};

