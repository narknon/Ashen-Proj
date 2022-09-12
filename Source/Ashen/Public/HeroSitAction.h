#pragma once
#include "CoreMinimal.h"
#include "EquipmentHandlingAction.h"
#include "HeroSitAction.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API AHeroSitAction : public AEquipmentHandlingAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LoopMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EndMontage;
    
    AHeroSitAction();
};

