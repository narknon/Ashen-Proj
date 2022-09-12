#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Humanoid.h"
#include "Engine/DataTable.h"
#include "EItemLocation.h"
#include "RemoteItemsNetworkData.h"
#include "UObject/NoExportTypes.h"
#include "AIHandIKDescription.h"
#include "InteractionDelegateDelegate.h"
#include "ENpcOutfitState.h"
#include "ELightLevel.h"
#include "EUIWidgetUnlockFX.h"
#include "UObject/NoExportTypes.h"
#include "EQuestItem.h"
#include "ENpcType.h"
#include "AshenSerialization.h"
#include "HeroCombatState.h"
#include "AIHandIKResult.h"
#include "AreaData.h"
#include "RaidenData.h"
#include "EBuffType.h"
#include "UObject/NoExportTypes.h"
#include "Hero.generated.h"

class UItemBase;
class AQuestPoint;
class UBuffEffect;
class UItemEquipment;
class ACreature;
class UHeroVitalAttributes;
class UInteractiveQueueComponent;
class UAnimMontage;
class UBoxComponent;
class AAshenPlayerController;
class UItemRelicBase;
class UTextRenderComponent;
class AQuestPathfindingPoint;
class AActor;
class UAkAudioEvent;
class UParticleSystem;
class UCurveVector;
class UCameraComponent;
class UAshenSpringArmComponent;
class USceneComponent;
class UHeroFeedbackComponent;
class UMaterialParameterCollection;
class UParticleSystemComponent;
class UIndicatorComponent;
class UQuestState;
class UItemTable;
class ATakeCurrencyEffect;
class UInteraction;
class UItemTalismanBase;
class ACoopClamberAction;
class UHeroEffectsComponent;
class USkeletalMesh;
class UPostProcessComponent;
class AHero;
class UAshenUserWidget;
class AAshenRaidenController;
class AAIJumpClamberNavLink;
class UItemConsumable;
class AAIClamberNavLink;
class AAIJumpNavLink;
class USkeletalMeshComponent;
class UPhysicsAsset;
class UObject;
class UAshenStateSave;
class UMaterialInstanceDynamic;
class AAshenAudioVolume;
class UQuestLine;
class UAnimInstance;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class ASHEN_API AHero : public AHumanoid {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponWorldHitDelegate, FVector, HitLocation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUseBeltItemDelegate, UItemBase*, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpearAttackDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceiveItemDelegate, UItemBase*, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerStartSprint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLightAttackDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHeavyAttackDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquipRightDelegate, UItemEquipment*, Item, bool, UserEquiped);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquipmentStateChange, UItemEquipment*, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquipLeftDelegate, UItemEquipment*, Item, bool, UserEquiped);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDodgeDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrencyGained, int32&, CurrencyAmount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeTargetDelegate, ACreature*, NewTarget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBuddyQuestPing, FVector, QuestLocation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAttackDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBuffEffectAppliedDelegate, UBuffEffect*, BuffEffect, bool&, bCancelBuff);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAttackFootRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackFootRootRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDamageFreezeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRefreshFreezeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicateFreeze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHeroVitalAttributes* HeroVitalAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UInteractiveQueueComponent* InteractiveQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ElderDarkIntroCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionPingLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> TestMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenPlayerController* PlayerController;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DeathActor;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuddyQuestPing OnBuddyQuestPing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SpearTeleportStartAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SpearTeleportEndAudioEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlungeAttackCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPlungeAttackDistance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* CameraShakeCurveLargeFall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* CameraShakeCurveDeathFall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* CameraShakeStormWiggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraShakeStormWiggleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FxStormIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FxStormHeavyIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* StatueTeleportFxStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* StatueTeleportFxFly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* StatueTeleportFxEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrowningDeathTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentLockedOnSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastLockedOnSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAimRotationCorrect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLateralInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLongitudinalInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnPitchAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpearThrowPitchOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLockOnPitchAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLockOnPitchAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothLockOnPitchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ReplicatedLockOnPitchAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInStrafeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultCameraLagHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultCameraLagForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnCameraLagHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockOnCameraLagForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<ACreature> StrafeTarget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCameraComponent* HeroCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAshenSpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpringArmHomePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* OrigCamPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* AimCamPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHeroFeedbackComponent* FeedbackComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* TextRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AshAmbientParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AshAmbientParticleCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* NpcAcquisitionParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UIndicatorComponent* IndicatorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* MaskAttachmentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FVector> MaskArmourOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* BackAttachmentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* HardcoreModeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FSoftObjectPath, FVector> HardcordeModeArmourOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockCostPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DodgeCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinStaminaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerfectComboScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollTimeWindowAfterStartOfDodge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RollTimeWindowAfterStartOfRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintPoiseDamageMultiplier;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float timeSinceLastEvade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float timeSinceLastDodge;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraShakeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoRotateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CamOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHandWeaponIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIHandIKDescription LeftHandWeaponIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIHandIKDescription RightHandWeaponIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightHandIKBoneOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightHandIKSocketBoneOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftHandIKFromRightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCameraBlockFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlockFadeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlockBehindRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlockFrontRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraUnblockBehindRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraUnblockFrontRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowerAimLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperAimLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CamInLerpTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CamOutLerpTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CamOutLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CamInLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoomArmStartLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoomArmEndLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowerAimOffsetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperAimOffsetValue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate LanternPickupDelegate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> RollMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> LongJumpMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> ShortJumpMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> SpotJumpMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> BlockRaiseMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> BlockLowerMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> DropLanternMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> PickUpLanternMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Emote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATakeCurrencyEffect> CurrencyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemBase> CurrencyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEngagedInDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DialogueActorInteractLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceForDialogueToEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* RightFistCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* RightFistTrailAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* LeftFistCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* LeftFistTrailAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* CustomInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* ClamberInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate ClamberDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* WaterRefillInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate WaterRefillDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* RescueInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate RescueInteractionDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* ShareWaterInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate ShareWaterDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* CoopClamberOfferInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* CoopClamberAcceptInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate CoopClamberDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* Alert_DownedInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate DownedResponseDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionDelegate AlertDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* Alert_ClimbWaiting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* Alert_DoorWaiting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* Alert_ClimbRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* Alert_DoorRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* Alert_WaterOffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponWorldHitDelegate OnWeaponWorldHit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DownedAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CoopClamberOfferAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CoopDoorOfferAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CoopClamberWaitAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CoopDoorWaitAlert;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoopClamberAcceptanceOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GiveWaterRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GiveWaterOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GiveWaterMaxAngleRadians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOfferWaterTimeoutEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OfferWaterTimeoutSecs;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RescueInteractionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RescueInteractionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RescueInteractionMaxAngleRadians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RescueHoldTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OfferClamberAcceptanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OfferClamberMaxAngleRadians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOfferClamberTimeoutEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OfferClamberTimeoutSecs;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClimbingNumVerticalTraces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbingVerticalTraceGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbingMaxFaceNormalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowClamberDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClamberHeightMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClamberHeightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnintendedClamberHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoopClamberHeightMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoopClamberHeightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnintendedCoopClamberHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoopClamberForwardOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClamberForwardOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClamberNumProjectedCapsules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClamberHeightFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CoopClamberHeightFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClamberLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClamberFaceNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ClamberDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClamberRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClamberMinDirectionDotProduct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClamberStaminaMinCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClamberStaminaMaxCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClamberDisplayMinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeGrabHeightMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeGrabHeightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowLedgeGrabDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeGrabMinStaminaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeGrabMaxStaminaCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeGrabForwardOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LedgeGrabNumProjectedCapsules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeGrabRequiredDistanceFromGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> LedgeGrabHeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> LedgeGrabOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UItemTalismanBase>> StartingTalismans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTalismanBase> StartingTalismanMajor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBuffEffect*> ActiveBuffEffects;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHeroEffectsComponent* HeroEffectsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* EffectorPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* PostProcessEffectorsCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaWaterInvunDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBuffEffect> DefaultWaterBuffEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBuffEffect> DefaultWaterPoolBuffEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LightIntrinsicAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle HeavyIntrinsicAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ShoulderBargeIntrinsicAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ShoulderBashIntrinsicAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaDiscoveryTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> TownAreaRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DungeonStyleUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsePlayerPostionLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerPositionLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAshenUserWidget> MapClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayerInTown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenRaidenController* Raiden;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultLockOnBreakDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultLockOnMinDistance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCloseHostile;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ACreature*> ObservingCreaturesList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIJumpClamberNavLink> DynamicJumpClamberLinkClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIClamberNavLink> DynamicClamberLinkClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAIJumpNavLink> DynamicJumpLinkClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleSubmergedHeightThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemEquipment> DebugLanternClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DebugDefaultSlopeScanLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> BleedDebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DamagePerSecondText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> WeaponDebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* DebugPlayerToFollow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAutoRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableExtraCombatNotifies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PostBeginPlayCalled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToSaveStone;
    
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> CamSequenceOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshFacialHair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> HairOptions_Male;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> HairOptions_Female;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> FacialHairOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> HairColourOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> SkinColourOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* DefaultNoArmourMale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* DefaultNoArmourFemale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* DefualtAliveMalePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* DefualtDeadMalePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* DefualtAliveFemalePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* DefualtDeadFemalePhysics;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PendingDiasoraLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* HairDynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FacialHairDynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAshenAudioVolume*> OverlappingAudioVolumes;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DownedGlobalAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PartnerDownedGlobalAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PartnerDeathGlobalAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RescuedGlobalAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RescueStartingAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RescueFailedAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RescuedAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WildmanPositionPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WildmanQuestPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TreasureHunterPositionPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TreasureHunterQuestPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ScionPositionPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ScionQuestPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PeglegPositionPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PeglegQuestPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OutcastPositionPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OutcastQuestPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HuntressPositionPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HuntressQuestPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FisherwomanPositionPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FisherwomanQuestPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayerPositionPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayerQuestPingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnStunnedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnStunnedAudioMuffleEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FailedConsumableUseSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastCulture;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcType CompanionNPCType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcOutfitState CompanionNPCOutfitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimePerFloorCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CorpsePlacementMaximumSubmergedHeight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLine* TownQuestLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestState> TownUnlockedQuestState;
    
public:
    AHero();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void WaterRefillCallback(UInteraction* Source, ACreature* Target);
    
    UFUNCTION(BlueprintCallable)
    void TryUseSpecificConsumableItem(UItemConsumable* ConsumableRef);
    
    UFUNCTION(BlueprintCallable)
    void TrySitWaterAction();
    
    UFUNCTION(BlueprintCallable)
    ACoopClamberAction* TryRecieveCoopClamberOffer(bool BoostType, const FVector& LerpLocation, const FVector& LerpDirection);
    
    UFUNCTION(BlueprintCallable)
    bool TryLightAttack(int32 SwingOffset);
    
    UFUNCTION(BlueprintCallable)
    void TryCoopClamberOffer(bool BoostType, bool bTimeoutEnabled, float TimeoutSecs);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SynchronizeRemoteItems(const FRemoteItemsNetworkData& RemoteItemsNetworkData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SynchronizeRemoteHero(bool bHardcoreModeMeshHidden);
    
    UFUNCTION(BlueprintCallable)
    void SwitchGender();
    
    UFUNCTION(BlueprintCallable)
    void SpawnWeapon(TSubclassOf<UItemEquipment> UseWeapon);
    
    UFUNCTION(BlueprintCallable)
    void ShowBossBars(ACreature* Boss);
    
    UFUNCTION(BlueprintCallable)
    void ShareWaterCallback(UInteraction* Source, ACreature* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetCreature(ACreature* NewTargetCreature, FName LockonSocket);
    
    UFUNCTION(BlueprintCallable)
    void SetShakeCurve(UCurveVector* SetTo);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerPositionLock(UAshenStateSave* AshenStateData);
    
    UFUNCTION(BlueprintCallable)
    void SetPendingDiasoraLanding(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBlackCapHidden(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBeDungeonStyleUI(UAshenStateSave* AshenStateData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddToDebugDPS(float Damage);
    
    UFUNCTION(BlueprintCallable)
    void RescueInteractionCallback(UInteraction* Source, ACreature* Target);
    
    UFUNCTION(BlueprintCallable)
    void RemoveQuestItem(EQuestItem QuestItemID, bool UI_Fanfare, int32 NumStacks, bool DelayedUIFanfare);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBuff(UBuffEffect* BuffEffect);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAndUnequipTalisman(TSubclassOf<UItemTalismanBase> TalismanClass, bool UI_Fanfare, bool& Removed);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RemoteSyncRelicData(FAshenSerialization NetworkData);
    
    UFUNCTION(BlueprintCallable)
    void RemoteSendTalismanNetworkData(FAshenSerialization NetworkData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RemoteRelicUnequipped();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RemoteRelicEquipped(TSubclassOf<UItemRelicBase> RelicClass);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RemoteReceiveTalismanNetworkData(FAshenSerialization NetworkData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshLocalizedInteractions();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReadyToAddNPCBarToHUD(bool& ReadyToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostBeginPlayBlueprint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUILinkedFX(EUIWidgetUnlockFX FXType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void PingQuestPosition(FVector QuestMarkerLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AQuestPathfindingPoint* PingQuestPointRepathed(const AQuestPoint* QuestPointRef, float ProximityRadius) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void PingPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTakenDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetMaterialsFadePercent(float FadePercent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRelicUnEquipped(UItemTable* Source, UItemBase* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnRelicEquipped(UItemTable* Source, UItemBase* Item);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerFinalised();
    
    UFUNCTION(BlueprintCallable)
    void OnItemRemoved(UItemTable* Source, UItemBase* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemChanged(UItemTable* Source, UItemBase* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAdded(UItemTable* Source, UItemBase* Item);
    
    UFUNCTION(BlueprintCallable)
    void OffsetCamera(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void MessageToClient(const FString& Msg);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToAuthority(const FString& Msg);
    
private:
    UFUNCTION(BlueprintCallable)
    void LanternPickupCallback(UInteraction* Source, ACreature* Target);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStrafing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyNeutral() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlungeFalling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPingActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEngagedInCombat() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeStartingTalismans();
    
    UFUNCTION(BlueprintCallable)
    void InitializeStartingEquipment();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void HostFinaliseMultiplayer();
    
    UFUNCTION(BlueprintCallable)
    void HideItem(UItemTable* Source, UItemBase* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void HasWaterBuff(bool& WaterBuff);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasQuestItem(EQuestItem QuestItemID, int32 Count) const;
    
    UFUNCTION(BlueprintCallable)
    bool GiveRewardItem(TSubclassOf<UItemBase> ItemClass, bool UI_Fanfare, int32& Index, UItemBase*& Item, EItemLocation LocationOverride, int32 StackAmount, bool DelayUIFanfare);
    
    UFUNCTION(BlueprintCallable)
    void GiveDebugLantern();
    
    UFUNCTION(BlueprintCallable)
    bool GetPendingDiasoraLanding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLockonWorldPosition(bool PreviousLockon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELightLevel GetLightLevel() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UInteraction*> GetInteractions_Implementation(ACreature* Target, UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHeroCombatState GetHeroCombatState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDrowningProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentRightHandSocketIKAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentRightHandIKResult(FAIHandIKResult& RightHandResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentLeftHandIKResult(FAIHandIKResult& LeftHandResult) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UInteraction*> GetAlerts();
    
    UFUNCTION(BlueprintCallable)
    void FloorCheck();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DownedResponseCallback(UInteraction* Source, ACreature* Target);
    
public:
    UFUNCTION(BlueprintCallable)
    void DispMessage(const FString& Msg);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CoopClamberCallback(UInteraction* Source, ACreature* Target);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncHeroMaxHealth(float HeroMaxHealth);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNpcAcquisitionPointUpdate(float Delta);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ClientFinaliseMultiplayer();
    
    UFUNCTION(BlueprintCallable)
    void ClamberCallback(UInteraction* Source, ACreature* Target);
    
    UFUNCTION(BlueprintCallable)
    void CheckAndSetInTownState(const FAreaData& AreaData);
    
    UFUNCTION(BlueprintCallable)
    void ChangeOutfitToDefault(bool& bChanged, bool ChangePhysicsOnly);
    
    UFUNCTION(BlueprintCallable)
    void ChangeOutfit(bool& bChanged, USkeletalMesh* ChangeToMesh, UPhysicsAsset* NewPhysics, bool bUseHair, bool ScaleMesh, bool ChangePhysicsOnly, TSubclassOf<UAnimInstance> NewAnimBP);
    
    UFUNCTION(BlueprintCallable)
    void ChangeGender(bool Male);
    
    UFUNCTION(BlueprintCallable)
    void CameraShake(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void CalculateLockOnDistance(const FRaidenData& RaidenData);
    
    UFUNCTION(BlueprintCallable)
    FVector CalculateHairForce(float DeltaTime, float WindOscilation, float WindStrength, float GustMin, float GustMax, float WindAlpha, float PlayerVelocityScalar, UPARAM(Ref) float& WindRand, UPARAM(Ref) float& WindTimeline);
    
    UFUNCTION(BlueprintCallable)
    void CalculateCameraLag(const FRaidenData& RaidenData);
    
    UFUNCTION(BlueprintCallable)
    void AuthoritySendTalismanNetworkData(FAshenSerialization NetworkData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void AuthorityReceiveTalismanNetworkData(FAshenSerialization NetworkData);
    
    UFUNCTION(BlueprintCallable)
    UBuffEffect* ApplyBuff(TSubclassOf<UBuffEffect> BuffEffect, EBuffType BuffType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AlertCallback(UInteraction* Source, ACreature* Target);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddAndEquipTalisman(TSubclassOf<UItemTalismanBase> TalismanClass, bool UI_Fanfare, bool& Added);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ActivateBossBarsAuthority(FGuid BossGUID);
    
};

