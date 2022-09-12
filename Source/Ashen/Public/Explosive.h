#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EMaxStunEffect.h"
#include "Explosive.generated.h"

class UParticleSystem;
class USoundCue;

UCLASS(Blueprintable)
class ASHEN_API AExplosive : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoiseDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaxStunEffect MaxStunEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ExplosionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundCue;
    
    AExplosive();
    UFUNCTION(BlueprintCallable)
    void DetonateOverride(float UseRadius, float UseDamage);
    
    UFUNCTION(BlueprintCallable)
    void Detonate();
    
};

