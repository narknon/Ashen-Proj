#pragma once
#include "CoreMinimal.h"
#include "CameraHandlingAction.h"
#include "Engine/DataTable.h"
#include "AIPinAttackTargetBase.generated.h"

class UAnimMontage;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API AAIPinAttackTargetBase : public ACameraHandlingAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle AttackDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACreature* AttackingCreature;
    
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
    AAIPinAttackTargetBase();
};

