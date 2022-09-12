#pragma once
#include "CoreMinimal.h"
#include "AshenAIContextBase.h"
#include "WraithContextTeleportRules.h"
#include "AshenAIContext_Wraith.generated.h"

class AAITrigger;
class ACreature;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UAshenAIContext_Wraith : public UAshenAIContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWraithContextTeleportRules> TeleportRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAITrigger*> CancelTriggers;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceWakeOnTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultipleRuleOverlap;
    
    UAshenAIContext_Wraith();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTeleportTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger);
    
};

