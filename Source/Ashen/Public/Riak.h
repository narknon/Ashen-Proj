#pragma once
#include "CoreMinimal.h"
#include "AIHumanoid.h"
#include "OnRiakPhaseChangeDelegate.h"
#include "OnRiakFightStartDelegate.h"
#include "Riak.generated.h"

class ULevelSequence;
class UAnimMontage;
class UParticleSystem;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASHEN_API ARiak : public AAIHumanoid {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* IntroLoopMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* PhaseTransitionSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LifeStealParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PhaseOneHelm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeStealPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhaseTransitionHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> HelmMaterialIndicies;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRiakFightStart OnRiakFightStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRiakPhaseChange OnRiakPhaseChange;
    
    ARiak();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldStartFight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPhaseTwoStart();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnPhaseTransition_Authority();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPhaseOneStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLifeSteal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUsing2HandedWeapon() const;
    
};

