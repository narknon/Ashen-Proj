#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "AIPinAttackBase.generated.h"

class UAnimMontage;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API AAIPinAttackBase : public AAIAttackActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* PinnedCreature;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PinStartMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PinLoopMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PinEndMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* PinFinisherMontage;
    
public:
    AAIPinAttackBase();
};

