#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "ElderDarkBackstabAction.generated.h"

class UBralAnimInstance;
class AElderDark;
class AHero;

UCLASS(Blueprintable)
class ASHEN_API AElderDarkBackstabAction : public AAIAttackActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AElderDark* ElderDark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBralAnimInstance* BralAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* BackstabbedHero;
    
public:
    AElderDarkBackstabAction();
};

