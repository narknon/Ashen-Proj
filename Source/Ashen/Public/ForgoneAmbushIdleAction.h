#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "Engine/DataTable.h"
#include "ForgoneAmbushIdleAction.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ASHEN_API AForgoneAmbushIdleAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* EarlyEndMontage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> AvailableAmbushAttacks;
    
public:
    AForgoneAmbushIdleAction();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* _Montage, bool bInterrupted);
    
};

