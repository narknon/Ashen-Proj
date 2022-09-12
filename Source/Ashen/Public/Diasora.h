#pragma once
#include "CoreMinimal.h"
#include "DiasoraBase.h"
#include "UObject/NoExportTypes.h"
#include "EDiasoraFjordState.h"
#include "Diasora.generated.h"

class ADiasoraTrigger;
class UAshenAnimNotify;

UCLASS(Blueprintable)
class ASHEN_API ADiasora : public ADiasoraBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreathVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBreathDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBreathDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BreathPushStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MouthLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADiasoraTrigger* TopDamageTriggerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADiasoraTrigger* TopDamageTriggerEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADiasoraTrigger* BotDamageTriggerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADiasoraTrigger* BotDamageTriggerEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADiasoraTrigger*> FlyOverTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADiasoraTrigger* TopAttackAreaTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADiasoraTrigger* BotAttackAreaTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharictersInTopAttackArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharictersInBotAttackArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandedAnimation_Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutOfSyncByNSecounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CatchupPlayRate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiasoraFjordState FlyingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipResetTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RecievedFirstLocalSyncTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLocalTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceRemoteTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutOfSyncTolerence;
    
public:
    ADiasora();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerBreathTop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerBreathEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerBreathBottom();
    
    UFUNCTION(BlueprintCallable)
    void SetDiasoraFjordState(EDiasoraFjordState State);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SendTriggerTickRemote();
    
    UFUNCTION(BlueprintCallable)
    void Notify(const UAshenAnimNotify* AshenNotify);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LandingStateSwitchCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LandingEffectsCallback();
    
    UFUNCTION(BlueprintCallable)
    EDiasoraFjordState GetDiasoraFjordState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DiasoraPreFlyin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DiasoraLandedIdle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DiasoraLandedAttacking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DiasoraLanded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DiasoraFlyInTriggered();
    
};

