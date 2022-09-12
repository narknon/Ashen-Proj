#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "AIActionHistory.h"
#include "AshenAIControllerBase.generated.h"

class UBehaviorTreeComponent;
class UAIAshenPathMoveRequest;
class ACreature;
class UAshenAIPathFollowingComponent;
class UAIAshenMetronomeWaitRequest;
class UAshenAIContextBase;
class AAITimeSyncedPathPoint;
class UBlackboardComponent;

UCLASS(Blueprintable)
class ASHEN_API AAshenAIControllerBase : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* BehaviorTree;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACreature* Creature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAshenAIPathFollowingComponent* AshenAIPathFollowingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAshenAIContextBase* PrimaryAIContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAshenAIContextBase* ActiveAIContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAshenAIContextBase*> SpawnerAIContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAshenAIContextBase*> GroupAIContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAIAshenPathMoveRequest* AIAshenPathMoveRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAIAshenMetronomeWaitRequest* AIAshenMetronomeWaitRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAITimeSyncedPathPoint* CurrentTSPRestPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FAIActionHistory> ActionHistory;
    
public:
    AAshenAIControllerBase();
    UFUNCTION(BlueprintCallable)
    UBlackboardComponent* GetBlackboard();
    
};

