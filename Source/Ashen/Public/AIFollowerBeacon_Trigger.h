#pragma once
#include "CoreMinimal.h"
#include "AIFollowerBeacon.h"
#include "AIFollowerBeacon_Trigger.generated.h"

class AAITrigger;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API AAIFollowerBeacon_Trigger : public AAIFollowerBeacon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAITrigger*> SpawnTriggers;
    
    AAIFollowerBeacon_Trigger();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerOverlapStart(ACreature* Creature, AAITrigger* Trigger);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerOverlapEnd(ACreature* Creature, AAITrigger* Trigger);
    
};

