#pragma once
#include "CoreMinimal.h"
#include "EquipmentHandlingAction.h"
#include "EClamberOfferingState.h"
#include "CoopClamberAction.generated.h"

class UAnimMontage;
class AHero;

UCLASS(Blueprintable)
class ASHEN_API ACoopClamberAction : public AEquipmentHandlingAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StartMontage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHero* Hero;
    
public:
    ACoopClamberAction();
    UFUNCTION(BlueprintCallable)
    EClamberOfferingState GetOfferState();
    
};

