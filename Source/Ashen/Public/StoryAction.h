#pragma once
#include "CoreMinimal.h"
#include "Action.h"
#include "AshenSerialization.h"
#include "StoryAction.generated.h"

class UAnimMontage;
class UPathFollowingComponent;

UCLASS(Blueprintable)
class ASHEN_API AStoryAction : public AAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAshenSerialization PreviousIdleAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UPathFollowingComponent* PathFollowingComp;
    
public:
    AStoryAction();
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* _Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    bool Interrupt(AAction* InterruptingAction);
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

