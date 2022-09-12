#pragma once
#include "CoreMinimal.h"
#include "AshenAIContextBase.h"
#include "AshenAIContext_Guardian.generated.h"

class AAITrigger;
class ACreature;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UAshenAIContext_Guardian : public UAshenAIContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAITrigger* GuardLootItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAITrigger*> CancelTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelOnGroupAlert;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceWakeOnBreakGuard;
    
    UAshenAIContext_Guardian();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCancelTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger);
    
};

