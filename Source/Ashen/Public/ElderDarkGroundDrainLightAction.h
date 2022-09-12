#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "ElderDarkGroundDrainLightAction.generated.h"

class AElderDark;

UCLASS(Blueprintable)
class ASHEN_API AElderDarkGroundDrainLightAction : public AAIAttackActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AElderDark* ElderDark;
    
public:
    AElderDarkGroundDrainLightAction();
};

