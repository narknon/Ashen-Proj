#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISpawnBase.h"
#include "AISpawnFlyingCritter.generated.h"

class AAIFlyingPath;
class AFlyingCritter;

UCLASS(Blueprintable)
class ASHEN_API AAISpawnFlyingCritter : public AAISpawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFlyingCritter> AIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIFlyingPath* SpawnTakeFlightPath;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFlyingCritter> AIClassRef;
    
public:
    AAISpawnFlyingCritter();
};

