#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Character.h"
#include "NetworkActorInterface.h"
#include "DamageDeltSignatureDelegate.h"
#include "IntrinsicAttackComponents.h"
#include "Engine/EngineTypes.h"
#include "EActionState.h"
#include "UObject/NoExportTypes.h"
#include "ESoundLevel.h"
#include "AshenSerialization.h"
#include "UObject/NoExportTypes.h"
#include "EAshenDamageType.h"
#include "Engine/DataTable.h"
#include "MetronomeState.h"
#include "BeginAttackSignatureDelegate.h"
#include "CreatureEffectsData.h"
#include "EWeight.h"
#include "FallData.h"
#include "GameplayTagContainer.h"
#include "ECustomMovementMode.h"
#include "UObject/NoExportTypes.h"
#include "EActionType.h"
#include "AshenDamage.h"
#include "Engine/EngineTypes.h"
#include "Creature.generated.h"

class AAction;
class UItemWeaponBase;
class ACreature;
class ALootActor;
class UNetworkComponent;
class UAkComponent;
class UAshenAnimMetronomeNotify;
class UAshenMovementComponent;
class ADeathAction;
class USimpleAnimInstance;
class AAshenBaseGameMode;
class AAshenBaseGameState;
class UAshenAIRelationshipComponent;
class UAshenGameInstance;
class AAshenAIControllerBase;
class UBehaviorTree;
class UAshenAIPerceptionComponent;
class UAshenAICombatComponent;
class UAshenAICommanderComponent;
class UAshenAIAvoidenceComponent;
class UAshenAnimNotify;
class UNavigationInvokerComponent;
class UAshenAIFootIKComponent;
class UCreatureEffectsComponent;
class AAISpawnBase;
class UVitalAttributes;
class UParticleSystem;
class ADiasoraTrigger;
class UAkAudioEvent;
class UPrimitiveComponent;
class UPushTarget;
class UMaterialInstanceDynamic;
class UAshenAIRepulseColliderComponent;
class UAIWeaponAttack;
class UAIEvade;

UCLASS(Blueprintable)
class ASHEN_API ACreature : public ACharacter, public INetworkActorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FStateChangeDelegate, ACreature*, Source, TEnumAsByte<EMovementMode>, PreviousMovementMode, uint8, PreviousSubState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMetronomeBeatDelegate, ACreature*, Source, const UAshenAnimMetronomeNotify*, Notify);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLockOnTargetDead, ACreature*, Source, ACreature*, PreviousLockOnTarget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FActionStateChangeDelegate, const AAction*, Source, EActionState, Current, EActionState, Previous);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollPushStrengthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollPushStrengthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanFreeze;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFrozen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float remainingFreezeDuration;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UNetworkComponent* NetworkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreatureCanSleepWake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckMinWakeFromSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WakeFuzzyRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WakeZScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceSleepCheckRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SleepCheckPulseTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SleepCountdownTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavWakeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavSleepRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfilePostSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultMeshCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAshenMovementComponent* AshenMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USimpleAnimInstance* SimpleAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameMode* GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameState* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenGameInstance* GameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoActionLoDFreezeMinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAshenAIControllerBase> OverrideControllerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* RootBehaviourTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenAIControllerBase* AshenAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAshenAIPerceptionComponent* PerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAshenAICombatComponent* CombatAIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAshenAICommanderComponent* CommanderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAshenAIRelationshipComponent* RelationshipComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAshenAIAvoidenceComponent* AvoidenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UNavigationInvokerComponent* NavigationInvokerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAshenAIFootIKComponent* AIFootIKComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UCreatureEffectsComponent* CreatureEffectsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAISpawnBase* AISpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> AvailableIntrinsicAIAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> AvailableIntrinsicAIEvades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIDefaultThreatAIConeHalfAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIDefaultThreatAIConeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipmentScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimulatedProxyPerceptionUpdateTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateChangeDelegate OnStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCombatStanceTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CombatStanceTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInCombatStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsBlocking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMetronomeBeatDelegate OnMetronomeBeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Metronome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MetronomeTickDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMetronomeState MetronomeState;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionStateChangeDelegate OnActionStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAction* CurrentAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrencyDropped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrencyDropMultiplayerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowThresholdDamageReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MidThresholdDamageReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighThresholdDamageReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CreatureEffectsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureEffectsData CreatureEffectsDataComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DiasaroBreathImmunityOverlaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADiasoraTrigger*> DiasaraDamageTriggers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ImpactAudioEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ImpactAttackTypeSwitchGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ImpactAttackWeightSwitchGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CriticalHitSwitchStateSuffix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNavWalkingAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavWalkingSafeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FIntrinsicAttackComponents> RegisteredIntrinsicAttackComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> DamageImmuneComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAltWeaponHoldPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALootActor> SpawnLootOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle UseLootTableDataRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitDropCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcAcquiredKilledAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImmuneToWaterDeath;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACreature* TargetCreature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACreature* PreviousTargetCreature;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> ExtraLockonSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> ExtraLockonComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeLockedOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockHeroLockOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayLockOnHealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnHealthBarHeightModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockOnSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockOnUsesAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnAnimationBlockedSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpineBendSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpineBendSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpineBendLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHeadLookSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadPitchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadPitchLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadYawSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadYawLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadYawStopLookAtScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockOnEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockRotateToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TargetHeadLookYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TargetHeadLookPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TargetHeadLookAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TargetSpineBendPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LockOnActionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool LockOnUpdatedWhileStationary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LockOnRotationDelta;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockOnTargetDead OnLockOnTargetDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnTurnActionCutOffDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseDefaultLockonPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsStrafing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVitalAttributes* VitalAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPushTarget* PushTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsWounded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepFallDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepFallDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightFallLandDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightFallLandDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumFallLandDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumFallLandDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargeFallDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LargeFallLandDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathFallDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle FallDataHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFallData FallData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bInvisibleToAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysConsiderForAIFollowerLoS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIgnoreHeroHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAshenAIRepulseColliderComponent*> OverlappingRepulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bImmuneToRepulseColliders;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIWeaponAttack*> IntrinsicAIAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIEvade*> IntrinsicAIEvades;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginAttackSignature OnBeginAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageDeltSignature OnDamageDelt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDamageDeltSignature OnDamageTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseCriticalHitMultiplierTimeout;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeight CreatureWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundLevel SoundLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeImpaled;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCreaturePosForBloodLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BloodLocationSpawnOffset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAkComponent* AkAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnFadeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateCreatureFadeProxyOnSync;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSpawnFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FadeMaterialParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeathDisintegrateMaterialParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADeathAction> DeathActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisintegrateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MeshDynamicMaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequireDynamicMaterialsAtSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DebugArmEffects;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayTag;
    
public:
    ACreature();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSpawnFade(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDisintegration(float DeltaSeconds);
    
public:
    UFUNCTION(Client, Reliable)
    void SynchronizeRemote(FAshenSerialization ActionData, bool bIsWoken, FVector Location, FRotator Rotation, TEnumAsByte<EMovementMode> MovementMode, FName ColProfile, FName ColProfileBeforeSleep);
    
    UFUNCTION(BlueprintCallable)
    void SpawnDebugArmEffects();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetCreature(ACreature* NewTargetCreature, FName LockonSocket);
    
    UFUNCTION(BlueprintCallable)
    void SetPoiseEnabledState(bool NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetInvulnerable();
    
    UFUNCTION(BlueprintCallable)
    void SetBlocking(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAkSwitchState(const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable)
    void ResetCombatStance();
    
    UFUNCTION(BlueprintCallable)
    void RemoteSendActionData(AAction* Sender, FAshenSerialization& ActionData);
    
    UFUNCTION(BlueprintCallable)
    void RefreshCombatStance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool QueryCurrentAction(EActionType Type, EActionState State, bool IgnoreState) const;
    
    UFUNCTION(BlueprintCallable)
    void PostAudioEventAtLocation(UAkAudioEvent* AudioEvent, const FVector& WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void PostAudioEvent(UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void PlayFlinchMontageRemote(FVector Direction);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void PlayCreatureDamageEffectsOnProxy(FAshenDamage Damage, bool SkipEffect, bool SkipSound);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OpenChannelRPC();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWakeMe(bool bIsFirstWake);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSleepMe();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRespondToAlert(ACreature* ToCreature, ACreature* FromCreature, int32 DistOrderInAlert);
    
    UFUNCTION(BlueprintCallable)
    void OnMetronomeNotify(const UAshenAnimMetronomeNotify* MetronomeNotify);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeathDisintegrate();
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(UPARAM(Ref) FAshenDamage& Damage, bool bFromRemote);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBossBarRemoved();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBossBarActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnActionStateChange(AAction* Action, EActionState Current, EActionState Previous);
    
    UFUNCTION(BlueprintCallable)
    void Notify(const UAshenAnimNotify* AshenNotify);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void NavWalkingChangeRemote(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStunned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStaminaGreaterThanZero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStaminaGreaterThanMinimum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStaggered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSleeping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyToStartAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsReadyToMove(bool& ReadyToMove) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsReadyToBlock(bool& ReadyToBlock) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsReadyNeutral(bool& ReadyNeutral) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerformingActionOfType(EActionType ActionType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKnockedDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvulnerableTo(EAshenDamageType DamageType) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBlocking(const FAshenDamage& Damage);
    
    UFUNCTION(BlueprintCallable)
    bool IsBackstab(const FAshenDamage& Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCustomLockOnBarLocation(FVector& OutWorldSpaceLocation);
    
    UFUNCTION(BlueprintCallable)
    bool HasAttackEnded() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasAttackAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemWeaponBase* GetWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUsing2HandedWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetReadyNeutral() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACreature* GetPreviousTargetCreature() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastTimeRendered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHeroLockOnLocation(FName LockonPointName, const ACreature* RequestingHero) const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetHeroLockOnFocus(FName LockonPointName, const ACreature* RequestingHero) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAshenMovementComponent* GetAshenMovementComponent() const;
    
    UFUNCTION(BlueprintPure)
    bool DoesMovementStateEqual(TEnumAsByte<EMovementMode> MovementMode, ECustomMovementMode CustomMode) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearInvulnerability();
    
    UFUNCTION(BlueprintCallable)
    void CancelAction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeLockedOnto(const ACreature* Observer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeImpaled() const;
    
    UFUNCTION(BlueprintCallable)
    float CalculateHeightSubmerged();
    
    UFUNCTION(BlueprintCallable)
    void AuthoritySendActionDataUnreliable(AAction* Sender, FAshenSerialization& ActionData);
    
    UFUNCTION(BlueprintCallable)
    void AuthoritySendActionData(AAction* Sender, FAshenSerialization& ActionData);
    
    
    // Fix for true pure virtual functions not being implemented
private:
    UFUNCTION()
    void SetRemoteRole(TEnumAsByte<ENetRole> NetRole) override PURE_VIRTUAL(SetRemoteRole,);
    
    UFUNCTION()
    void RemoteOrphaned() override PURE_VIRTUAL(RemoteOrphaned,);
    
    UFUNCTION()
    void RemoteInitialise() override PURE_VIRTUAL(RemoteInitialise,);
    
    UFUNCTION()
    void OpenChannel() override PURE_VIRTUAL(OpenChannel,);
    
    UFUNCTION()
    void OnOpenChannel() override PURE_VIRTUAL(OnOpenChannel,);
    
    UFUNCTION()
    void AuthorityReset() override PURE_VIRTUAL(AuthorityReset,);
    
    UFUNCTION()
    void AuthorityInitialise() override PURE_VIRTUAL(AuthorityInitialise,);
    
};

