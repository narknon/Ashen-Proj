#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "ElderDarkPillarBreakAction.generated.h"

class UBralAnimInstance;
class AElderDark;

UCLASS(Blueprintable)
class ASHEN_API AElderDarkPillarBreakAction : public AAIAttackActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AElderDark* ElderDark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBralAnimInstance* BralAnimInstance;
    
public:
    AElderDarkPillarBreakAction();
};

