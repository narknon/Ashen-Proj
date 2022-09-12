#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EquipmentHandlingAction.h"
#include "ELadderState.h"
#include "LadderAction.generated.h"

class UPathFollowingComponent;
class UAnimMontage;
class ANavLinkProxy;

UCLASS(Blueprintable)
class ASHEN_API ALadderAction : public AEquipmentHandlingAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StartMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform MountTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxClimbMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentClimbMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELadderState CurrentLadderState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELadderState PendingLadderState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLoopClimb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ELadderState LoopState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANavLinkProxy* NavLink;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UPathFollowingComponent* PathFollowingComp;
    
public:
    ALadderAction();
    UFUNCTION(BlueprintCallable)
    void SprintUp();
    
    UFUNCTION(BlueprintCallable)
    void SlideDown();
    
    UFUNCTION(BlueprintCallable)
    void DropFromLadder();
    
    UFUNCTION(BlueprintCallable)
    void Drop();
    
    UFUNCTION(BlueprintCallable)
    void ClimbUp();
    
    UFUNCTION(BlueprintCallable)
    void ClimbStop();
    
    UFUNCTION(BlueprintCallable)
    void ClimbDown();
    
};

