#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionDelegateDelegate.h"
#include "InteractionSource.h"
#include "Engine/EngineTypes.h"
#include "CritterTrap.generated.h"

class UAkComponent;
class UInteraction;
class UBoxComponent;
class USkeletalMeshComponent;
class UParticleSystemComponent;
class UAnimationAsset;
class ASmallGroundCritter;
class ALootActor;
class ACreature;
class UPrimitiveComponent;
class AHero;

UCLASS(Blueprintable)
class ASHEN_API ACritterTrap : public AActor, public IInteractionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* ResetInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate ResetInteractionDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* DetonationTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TrapMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* TrapResetAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* TrapTriggerAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrapPlayerDamage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASmallGroundCritter* TrappedCritter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALootActor* TargetLoot;
    
public:
    ACritterTrap();
    UFUNCTION(BlueprintCallable)
    void ResetTrapCallback(UInteraction* Source, ACreature* Target);
    
    UFUNCTION(BlueprintCallable)
    void ResetTrap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTrapTrigger(ACreature* TargettedCreature);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTrapReset();
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void LootSpawnedCallback(ACreature* Source, ALootActor* LootActor);
    
    UFUNCTION(BlueprintCallable)
    void LootClosedCallback(AHero* Hero);
    
    
    // Fix for true pure virtual functions not being implemented
};

