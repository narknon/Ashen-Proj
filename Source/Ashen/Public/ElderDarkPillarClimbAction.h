#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "UObject/NoExportTypes.h"
#include "ElderDarkPillarClimbAction.generated.h"

class UAIProxy_ElderDark_Pillar;
class UBralAnimInstance;
class AElderDark;

UCLASS(Blueprintable)
class ASHEN_API AElderDarkPillarClimbAction : public AAIAttackActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAIProxy_ElderDark_Pillar* PillarProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EntryPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AElderDark* ElderDark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBralAnimInstance* BralAnimInstance;
    
public:
    AElderDarkPillarClimbAction();
};

