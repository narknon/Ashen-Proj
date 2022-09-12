#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EAIContextType.h"
#include "UObject/NoExportTypes.h"
#include "AITimeSyncedPathPoint.generated.h"

class AAITimeSyncedPathPoint;
class UBehaviorTree;
class USphereComponent;
class UBillboardComponent;
class AAITimeSyncedPath;

UCLASS(Blueprintable)
class ASHEN_API AAITimeSyncedPathPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPathingPointOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, meta=(AllowPrivateAccess=true))
    int32 ExtraRestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* RestBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAIContextType> RestContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAITimeSyncedPath* ParentPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, meta=(AllowPrivateAccess=true))
    AAITimeSyncedPathPoint* NextPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, TextExportTransient, meta=(AllowPrivateAccess=true))
    int32 ArrivalTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FloorPoint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* SpherePoint;
    
public:
    AAITimeSyncedPathPoint();
};

