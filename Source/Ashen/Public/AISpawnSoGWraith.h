#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISpawnBase.h"
#include "AISpawnSoGWraith.generated.h"

class AAshWraith;
class AAISpawnShadowOfGod;

UCLASS(Blueprintable)
class ASHEN_API AAISpawnSoGWraith : public AAISpawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAshWraith> AIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAISpawnShadowOfGod* ParentSpawner;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAshWraith> AIClassRef;
    
public:
    AAISpawnSoGWraith();
};

