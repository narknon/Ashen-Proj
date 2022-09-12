#pragma once
#include "CoreMinimal.h"
#include "IntrinsicAttackComponents.generated.h"

class UBoxComponent;
class USceneComponent;
class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct ASHEN_API FIntrinsicAttackComponents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* AttackCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* AttackTrailLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WeaponGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AttackTrail;
    
    FIntrinsicAttackComponents();
};

