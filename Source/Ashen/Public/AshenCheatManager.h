#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "ENpcType.h"
#include "AshenCheatManager.generated.h"

class APawn;
class AController;
class AHero;

UCLASS(Blueprintable)
class ASHEN_API UAshenCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* MyHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* MyController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* FlyPawn;
    
public:
    UAshenCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void txt(const FString& TheMessage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestAshenCheatManager();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToDebugCamera();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenTravel(const FString& TravelPointName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenToggleCinematicSubtitles();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenTeleportTarget(float X, float Y, float Z, bool bAsMove);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenTeleportFollowerToHero();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenTeleportFollowerToCachedTransform(int32 CacheIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenSuicideKing();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenStaminaKing();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenSpawnAIFollower(bool bWithGodMode, int32 Type, int32 ForceWeapon, bool bForceCopyHeroRelic);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenSoloCoopClimb(bool SoloClimber);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenShowTargetShieldDebug(bool bShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenShowTargetPerception(bool bShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenShowTargetDamageCollision(bool bShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenShowTargetAttacksDebug(bool bShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenShowTargetAttackRange(bool bShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenShowNavWalk(bool bShowDebug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenShowNavLinks(bool bShow, bool TransientOnly, bool NonTransientOnly);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenShowDynamicFlightPaths(bool Show);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenShowDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenShowAvoidence(bool Show);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenShowAIOwnership(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenShowAINetState(bool Enable, bool bHeroToo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenShowAIHealthScale(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenShowAIFootIK(bool bShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenShowAIFollowerBossThreat(bool bShow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenShowAIActivity(bool Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenSetTargetForceNavWalk(bool bForce, bool bShowDebug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenSetTargetAnimUpdateRate(float Rate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenSetTargetAllowNavWalk(bool bAllow, bool bShowDebug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenSetSleepAllButTarget(bool Sleep);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenSetSleepAllButNearest(bool Sleep);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenSetSleepAll(bool Sleep);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenSetElderDarkLight(float LightPercentage);
    
    UFUNCTION(Exec)
    void AshenSetBottleCapacity(uint32 waterCapacity);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenSetAllForceNavWalk(bool bForce, bool bShowDebug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenSetAllAnimUpdateRate(float Rate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenSetAllAllowNavWalk(bool bAllow, bool bShowDebug);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenSetAIFollowerHealth(int32 NewHealth);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenScaleHeroWeapon(float Scale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenResetAllSpawners();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenRefreshVitals();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenPrintSaveData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenPlaySogHexExplode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenPlaySogHexCharge();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenNetworkDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenLockAISpawnManager(bool Lock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenKillAIFollower();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenGodMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenGetQuestStates(const FString& QuestLine);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenForgetMeNot(bool Enable, bool ForFollower);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenForceWakeAll(float MinTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenForceRegisterNearestSpawner();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenFollowPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenEnableWeaponHandIK(bool bEnable, bool bOnLocalHero, bool bTestPegLeg);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenEnableTargetFootIK(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenEnableRemoteHeroCameraBlockFade(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenEnableHeroFootIK(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenEnableDeferCreatureUnload(bool bEnable, float DeferDelayPerCreature);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenEnableDebugNetPingPong(bool bEnable, float WaitTimer);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenEnableAllFootIK(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenDropAllElderDarkPillars();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenDisableNonVitalTicks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenDisableComponentTicks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenDisableActorTicks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenDestroyNearestSpawner();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenDestroyAllTransientNavLinks(bool bJumpLinks, bool bClamberLinks, bool bJumpClamberLinks);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenDestroyAllSpawners();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenDebugSlopeScanRange(bool bEnable, float DetectRange, int32 DetectDiv);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenDebugSlopeScanEX(bool bEnable, float GreenRange, float YellowRange, float RedRange, float DetectRange, int32 DetectDiv, bool bDrawToAngle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenDebugSlopeScan(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenDamageTarget(float HealthPercentage, int32 PoiseDamage, float PushAmount, int32 MaxStunLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenDamageHero(int32 RawDamageAmount, int32 RawPoiseAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenDamageAllButTarget(float HealthPercentage, int32 PoiseDamage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenDamageAll(float HealthPercentage, int32 PoiseDamage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenDamageAIFollower(int32 RawDamageAmount, int32 RawPoiseAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenComponentCount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenCharacterType(int32 Style, int32 hair, int32 FacialHair, int32 HairColour, int32 SkinColour);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenCacheHeroTransform();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenBloodForTheBloodGod();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenBlockAIFollowerSpawn(bool bBlock);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenAddItem(const FString& ItemClass);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenActorCount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AshenAcquireNpc(ENpcType NpcType, bool bEvenIfNotInPool);
    
};

