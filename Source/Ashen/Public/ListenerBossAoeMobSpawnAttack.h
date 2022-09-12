#pragma once
#include "CoreMinimal.h"
#include "AIAttackActionBase.h"
#include "ListenerBossAoeMobSpawnAttack.generated.h"

class AAISpawnListenerBoss;

UCLASS(Blueprintable)
class ASHEN_API AListenerBossAoeMobSpawnAttack : public AAIAttackActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAISpawnListenerBoss* ListenerSpawner;
    
public:
    AListenerBossAoeMobSpawnAttack();
};

