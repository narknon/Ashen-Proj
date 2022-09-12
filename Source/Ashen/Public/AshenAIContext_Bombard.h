#pragma once
#include "CoreMinimal.h"
#include "EAIRelationship.h"
#include "AshenAIContextBase.h"
#include "AshenAIContext_Bombard.generated.h"

class AAITrigger;
class UAshenEventData;
class AAIContextMarker;
class ACreature;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UAshenAIContext_Bombard : public UAshenAIContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAIContextMarker*> BombardLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAITrigger*> BombardZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAITrigger*> WakeTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAITrigger*> CancelTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnHeroOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIRelationship BombardMinRelationLevel;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceWakePulse;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceWakeOnCancelTrigger;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACreature*> BombardTargets;
    
public:
    UAshenAIContext_Bombard();
protected:
    UFUNCTION(BlueprintCallable)
    void OnWakeTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger);
    
    UFUNCTION(BlueprintCallable)
    void OnCreatureDamaged(UAshenEventData* EventData);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger);
    
    UFUNCTION(BlueprintCallable)
    void OnBombardTriggerExit(ACreature* Creature, AAITrigger* Trigger);
    
    UFUNCTION(BlueprintCallable)
    void OnBombardTriggerEnter(ACreature* Creature, AAITrigger* Trigger);
    
};

