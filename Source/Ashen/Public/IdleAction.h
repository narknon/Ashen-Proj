#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "AshenDamage.h"
#include "IdleAction.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API AIdleAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* EnterIdleMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* IdleLoopMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* EndIdleMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* EndIdleFastMontage;
    
    AIdleAction();
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* _Montage, bool bInterrupted);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(const FAshenDamage& Damage);
    
};

