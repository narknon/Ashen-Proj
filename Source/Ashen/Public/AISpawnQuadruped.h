#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISpawnBase.h"
#include "AISpawnQuadruped.generated.h"

class AQuadruped;

UCLASS(Blueprintable)
class ASHEN_API AAISpawnQuadruped : public AAISpawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AQuadruped> AIClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AQuadruped> AIClassRef;
    
public:
    AAISpawnQuadruped();
};

