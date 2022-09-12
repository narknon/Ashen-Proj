#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISpawnBase.h"
#include "AISpawnMatriarch.generated.h"

class AMatriarch;
class AMatriarchEffectBlockingVolume;

UCLASS(Blueprintable)
class ASHEN_API AAISpawnMatriarch : public AAISpawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMatriarch> AIClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMatriarch> AIClassRef;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMatriarchEffectBlockingVolume*> EffectBlockingVolumes;
    
    AAISpawnMatriarch();
};

