#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractiveQueueComponent.generated.h"

class AAshenPlayerController;
class UInteraction;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UInteractiveQueueComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInteraction*> InteractionQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* PreviousFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableQueue;
    
    UInteractiveQueueComponent();
    UFUNCTION(BlueprintCallable)
    void NextInteractive(UInteraction*& Front);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled();
    
    UFUNCTION(BlueprintCallable)
    void Interact(bool _aPressed, AAshenPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNext(UInteraction*& Next);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFrontInteractions(UInteraction*& _aInteraction, UInteraction*& _yInteraction, UInteraction*& _AlertInteraction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFront(UInteraction*& Front, bool& HasNext);
    
};

