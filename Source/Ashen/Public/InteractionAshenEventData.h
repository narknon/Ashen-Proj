#pragma once
#include "CoreMinimal.h"
#include "AshenEventData.h"
#include "EInteractionEventType.h"
#include "InteractionAshenEventData.generated.h"

class AHero;
class AActor;

UCLASS(Blueprintable)
class ASHEN_API UInteractionAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InteractedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* Interactor;
    
public:
    UInteractionAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHero* GetInteractor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInteractionEventType GetInteractionType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInteractedActor();
    
};

