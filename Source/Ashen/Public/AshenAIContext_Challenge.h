#pragma once
#include "CoreMinimal.h"
#include "EAIRelationship.h"
#include "AshenAIContextBase.h"
#include "AshenAIContext_Challenge.generated.h"

class AAITrigger;
class AAISpawnBase;
class ACreature;
class AAISpawnDoorMaiden;
class UAshenEventData;
class AAIContextMarker;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UAshenAIContext_Challenge : public UAshenAIContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnBase*> Challengers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnBase*> Bouncers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnDoorMaiden*> DoorMaidensLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnDoorMaiden*> DoorMaidensRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIContextMarker*> BouncerMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIContextMarker*> SpectateMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIContextMarker*> CompletedMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIContextMarker*> BrokenMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAITrigger*> ChallengeTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAITrigger*> BreakTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnHeroOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIRelationship ChallengeMinRelationLevel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceWakeOnChallengeTrigger;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveInterceptResponsePrediction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIRelationship ChallengeCompleteRelationChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACreature*> ChallengedCreatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACreature*> BrokenCreatures;
    
public:
    UAshenAIContext_Challenge();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCreatureDeath(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnCreatureDamaged(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnChallengeTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger);
    
    UFUNCTION(BlueprintCallable)
    void OnBreakTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger);
    
};

