#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractionDelegateDelegate.h"
#include "InteractionSource.h"
#include "WaterPool.generated.h"

class UStaticMeshComponent;
class UBoxComponent;
class UParticleSystemComponent;
class UInteraction;
class UAISpawnManager;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API AWaterPool : public AActor, public IInteractionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowerDiscoverRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowerDiscoverConeHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowerDiscoverConeYawAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowerDiscoverDrawDebugInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFollowerDiscoverDrawDebugInPIE;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractionTriggerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WaterStaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* WaterHeatParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* TakeWaterChargeInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAISpawnManager* AISpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate TakeWaterChargeDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnUseLerpOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnUseLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrainedWaterOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrainingTimeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrainingDelay;
    
public:
    AWaterPool();
    UFUNCTION(BlueprintCallable)
    void TakeWaterCharge(UInteraction* Source, ACreature* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUsed(bool UsingWaterbottle);
    
    
    // Fix for true pure virtual functions not being implemented
};

