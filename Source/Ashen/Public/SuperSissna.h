#pragma once
#include "CoreMinimal.h"
#include "AIHumanoid.h"
#include "SuperSissna.generated.h"

class ULevelSequence;
class AAISpawnSuperSissna;

UCLASS(Blueprintable)
class ASHEN_API ASuperSissna : public AAIHumanoid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScuttleArenaTrackTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceScuttleTargetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* DeathSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAISpawnSuperSissna* SuperSissnaSpawner;
    
    ASuperSissna();
};

