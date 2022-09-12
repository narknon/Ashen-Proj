#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISpawnBase.h"
#include "EScagSpawnState.h"
#include "UObject/NoExportTypes.h"
#include "ScagTumbleRules.h"
#include "ScagCliffExitRules.h"
#include "AISpawnScag.generated.h"

class ACreature;
class AScagEx;
class AAITrigger;

UCLASS(Blueprintable)
class ASHEN_API AAISpawnScag : public AAISpawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AScagEx> AIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScagSpawnState ScagSpawnState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCliffTurrentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBellRinger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideBellRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OverrideCliffBellRingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OverrideCliffBellIntensityRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurfaceClingOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScagTumbleRules> TumbleRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScagCliffExitRules> CliffExitRules;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AScagEx> AIClassRef;
    
public:
    AAISpawnScag();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTumbleTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger);
    
    UFUNCTION(BlueprintCallable)
    void OnCliffHangExitTriggerOverlapChange(ACreature* Creature, AAITrigger* Trigger);
    
};

