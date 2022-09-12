#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "ElderDarkHoleEnterAction.generated.h"

class UAIProxy_ElderDark_Hole;
class UBralAnimInstance;
class AElderDark;

UCLASS(Blueprintable)
class ASHEN_API AElderDarkHoleEnterAction : public AAIAttackActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAIProxy_ElderDark_Hole* HoleProxy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AElderDark* ElderDark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBralAnimInstance* BralAnimInstance;
    
public:
    AElderDarkHoleEnterAction();
};

