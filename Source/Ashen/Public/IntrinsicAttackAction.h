#pragma once
#include "CoreMinimal.h"
#include "AttackActionRoot.h"
#include "IntrinsicAttackAction.generated.h"

class UOverlapProxyHitTracking;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API AIntrinsicAttackAction : public AAttackActionRoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UOverlapProxyHitTracking*> EnabledHitsPerCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReboundCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowCombatRotationCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MultipleOverlapWeaponEnabledCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MultipleOverlapWeaponHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* TargetCreature;
    
    AIntrinsicAttackAction();
};

