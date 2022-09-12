#pragma once
#include "CoreMinimal.h"
#include "Creature.h"
#include "NetworkPointer.h"
#include "AshenDamage.h"
#include "EActionState.h"
#include "ElderDark.generated.h"

class UBoxComponent;
class UAIProxy_ElderDark_Pillar;
class UItemLantern;
class USceneComponent;
class ULevelSequence;
class AAISpawnElderDark;
class UAIProxy_ElderDark_Hole;
class AAction;

UCLASS(Blueprintable)
class ASHEN_API AElderDark : public ACreature {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* LeapCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HiddenLightCheckRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightDecayUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightGrowth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightDecay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LightTriggerThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightBurnThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SetLightOnHoleFlush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoleRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DarknessRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTargetInDarknessRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrainSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrainRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MultiLanternMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightStunMontageLoops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PillarsDownBeserkHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBeserkHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthLossOnHoleLightFlush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntroDamageReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* DeathSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* RightFistCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* RightFistTrailAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* LeftFistCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* LeftFistTrailAttachment;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemLantern*> Lanterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAISpawnElderDark* ElderSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAIProxy_ElderDark_Pillar* CurrentPillarProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAIProxy_ElderDark_Hole* CurrentHoleProxy;
    
public:
    AElderDark();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RemoteStartIntroAction(FNetworkPointer Target);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTriggerLightDecay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReachedWounded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLightThresholdTrigger(uint8 TriggerPointIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFightHasBegun();
    
    UFUNCTION(BlueprintCallable)
    void OnDamageElderDark(const FAshenDamage& Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeserk();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAshExplode();
    
    UFUNCTION(BlueprintCallable)
    void OnActionStateChange(AAction* Action, EActionState Current, EActionState Previous);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsReadyNeutral(bool& ReadyNeutral) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeLockedOnto(const ACreature* Observer) const;
    
};

