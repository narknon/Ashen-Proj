#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISpawnHumanoid.h"
#include "UObject/NoExportTypes.h"
#include "AISpawnListenerBoss.generated.h"

class AAIGroup;
class AAISpawnListenerBossForgone;
class ULevelSequence;

UCLASS(Blueprintable)
class ASHEN_API AAISpawnListenerBoss : public AAISpawnHumanoid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> ForgoneIDPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAISpawnListenerBossForgone> ForgoneSpawnerClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnedForgoneLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnedForgoneLifetimeVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* DeathSequence;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIGroup* MegaGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAISpawnListenerBossForgone*> ForgoneSpawnPool;
    
public:
    AAISpawnListenerBoss();
};

