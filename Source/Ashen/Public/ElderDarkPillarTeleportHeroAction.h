#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "ElderDarkPillarTeleportHeroAction.generated.h"

class UBralAnimInstance;
class AElderDark;

UCLASS(Blueprintable)
class ASHEN_API AElderDarkPillarTeleportHeroAction : public AAIAttackActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AElderDark* ElderDark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBralAnimInstance* BralAnimInstance;
    
public:
    AElderDarkPillarTeleportHeroAction();
};

