#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionDelegateDelegate.h"
#include "InteractionSource.h"
#include "ENpcType.h"
#include "ETownBuildingType.h"
#include "ETownBuildingState.h"
#include "NpcHouseToggleSwitch.generated.h"

class UTownManager;
class UInteraction;
class ULevelStreaming;
class UAshenEventData;
class ACreature;
class UObject;

UCLASS(Blueprintable)
class ASHEN_API ANpcHouseToggleSwitch : public AActor, public IInteractionSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcType HouseOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETownBuildingState CurrentState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* Interaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate InteractionDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETownBuildingType TownBuildingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTownManager* NpcManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* LoadingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> LevelsToUnload;
    
public:
    ANpcHouseToggleSwitch();
private:
    UFUNCTION(BlueprintCallable)
    void ZoneStreamingEvent(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelShown();
    
    UFUNCTION(BlueprintCallable)
    void OnInteract(UInteraction* Source, ACreature* Target);
    
    UFUNCTION(BlueprintCallable)
    TArray<UInteraction*> GetInteractions_Implementation(ACreature* Target, UObject* Context);
    
    
    // Fix for true pure virtual functions not being implemented
};

