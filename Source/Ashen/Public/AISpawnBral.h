#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BralCliffRules.h"
#include "AISpawnBase.h"
#include "AISpawnBral.generated.h"

class ABral;
class ACreature;
class AAITrigger;

UCLASS(Blueprintable)
class ASHEN_API AAISpawnBral : public AAISpawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ABral> AIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCliffBral;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CliffIdleExtraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBralCliffRules> CliffRules;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABral> AIClassRef;
    
public:
    AAISpawnBral();
protected:
    UFUNCTION(BlueprintCallable)
    void OnCliffTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger);
    
};

