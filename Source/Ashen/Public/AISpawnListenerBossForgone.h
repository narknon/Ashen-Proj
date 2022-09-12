#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISpawnBase.h"
#include "AISpawnListenerBossForgone.generated.h"

class AForgone;
class AAISpawnListenerBoss;

UCLASS(Blueprintable)
class ASHEN_API AAISpawnListenerBossForgone : public AAISpawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AForgone>> AIClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAISpawnListenerBoss* ParentSpawner;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AForgone>> AIClassRefs;
    
public:
    AAISpawnListenerBossForgone();
};

