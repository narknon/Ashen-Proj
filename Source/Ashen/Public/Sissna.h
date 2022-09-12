#pragma once
#include "CoreMinimal.h"
#include "AIHumanoid.h"
#include "Sissna.generated.h"

class ULevelSequence;
class AAISpawnSissna;

UCLASS(Blueprintable)
class ASHEN_API ASissna : public AAIHumanoid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhaseTransitionHealthPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAISpawnSissna* SissnaSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* TransformSequence;
    
    ASissna();
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnPhaseTwoSwap_Authority();
    
};

