#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISpawnBase.h"
#include "AISpawnDoorMaiden.generated.h"

class ADoorMaiden;

UCLASS(Blueprintable)
class ASHEN_API AAISpawnDoorMaiden : public AAISpawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADoorMaiden> AIClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADoorMaiden> AIClassRef;
    
public:
    AAISpawnDoorMaiden();
};

