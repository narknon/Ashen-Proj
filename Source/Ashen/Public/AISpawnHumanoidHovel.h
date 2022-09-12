#pragma once
#include "CoreMinimal.h"
#include "AISpawnHumanoid.h"
#include "PodPopRules.h"
#include "AISpawnHumanoidHovel.generated.h"

class ACreature;
class UAnimMontage;
class AAITrigger;

UCLASS(Blueprintable)
class ASHEN_API AAISpawnHumanoidHovel : public AAISpawnHumanoid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* IdleLoopMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> ExitMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPodPopRules> ExitRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiscoverTriggerer;
    
    AAISpawnHumanoidHovel();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger);
    
};

