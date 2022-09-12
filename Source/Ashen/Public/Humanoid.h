#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Creature.h"
#include "InteractionSource.h"
#include "EFallState.h"
#include "UObject/NoExportTypes.h"
#include "EEquipmentState.h"
#include "EItemType.h"
#include "ELadderState.h"
#include "AshenSerialization.h"
#include "UObject/NoExportTypes.h"
#include "EItemLocation.h"
#include "AttackDescription.h"
#include "Humanoid.generated.h"

class UItemWeaponBase;
class UCurveFloat;
class UHumanoidAnimInstance;
class UItemPotion;
class UItemShield;
class UItemEquipment;
class UItemConsumable;
class UItemWeapon;
class UObject;
class UInventory;
class APlayerLootSack;
class ANavLinkProxy;
class UItemArmour;
class AActor;
class AProjectile;
class AAction;
class ULootBoxComponent;
class UAnimMontage;
class UItemLantern;
class UInteraction;
class UAkAudioEvent;
class UItemTable;
class UItemWaterBottle;
class UItemBase;

UCLASS(Blueprintable)
class ASHEN_API AHumanoid : public ACreature, public IInteractionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHumanoidAnimInstance* HumanoidAnimInstance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* WaterDragRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TreadWaterVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TreadWaterStamDrain;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCharacterCreationMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimAbilityEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimAbilityLeave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFallState FallState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MustLand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ClamberAnimationHeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> ClamberAnimationOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemWeaponBase> StartingWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemWeaponBase> ExtraWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemShield> StartingShieldClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemEquipment> StartingUtilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemConsumable> StartingConsumableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingConsumableNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemPotion> StartingPotionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentState StartingWeaponState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentState StartingExtraWeaponState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentState StartingShieldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentState StartingUtilityState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemType PreviousLeftHandItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemType PreviousRightHandItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemArmour> StartingArmourClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualEquipmentInitialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartWithUtilityEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ProjectileIgnoreActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> ProjectileWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsThrowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintCancelAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintStaminaCostPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSprintingTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintingTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SprintEnding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SprintHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugCheat_SoloCoopClimber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APlayerLootSack> LootSackActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    ULootBoxComponent* CurrentLootActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CritterHarvestMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemLantern* TargetLantern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteraction* LanternPickupInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitingOnLastAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DodgeBlendInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeapRollHeightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeapRollHeightMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeapRollVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLeapRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartLadderSlideAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopLadderSlideAudioEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WeaponFullyChargedAudioEvent;
    
public:
    AHumanoid();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void UpdateItemStateRemote(FAshenSerialization Data);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDisintegration(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void TrySprint();
    
    UFUNCTION(BlueprintCallable)
    AAction* TrySpecificRightHand(UItemEquipment* CurrentEquipment, UItemEquipment* NextEquipment, bool UserEquiped);
    
    UFUNCTION(BlueprintCallable)
    AAction* TrySpecificLeftHand(UItemEquipment* CurrentEquipment, UItemEquipment* NextEquipment, bool UserEquiped);
    
    UFUNCTION(BlueprintCallable)
    void TryMountLadderAI(ELadderState StartingState, const FTransform& MountTransform, int32 MaxClimbMontages, ELadderState LoopState, ANavLinkProxy* ForNavLink);
    
    UFUNCTION(BlueprintCallable)
    void TryMountLadder(ELadderState StartingState, const FTransform& MountTransform, int32 MaxClimbMontages);
    
    UFUNCTION(BlueprintCallable)
    void SprintUpLadder();
    
    UFUNCTION(BlueprintCallable)
    APlayerLootSack* SpawnSack(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void SlideDownLadder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldResetSprint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldEndSprint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldCancelSprint();
    
    UFUNCTION(BlueprintCallable)
    UItemEquipment* SetEquipment(UItemEquipment* Equipment, EEquipmentState OverrideState, EItemLocation ExistingItemDiscardLocation);
    
    UFUNCTION(BlueprintCallable)
    void ResetSprint();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RemoteItemRemoved(UClass* ItemClass);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RemoteItemAdded(EItemLocation ItemLocation, UClass* ItemClass);
    
    UFUNCTION(BlueprintCallable)
    void OverlapWithLantern(UItemLantern* thisLantern);
    
    UFUNCTION(BlueprintCallable)
    void OnItemRemoved(UItemTable* Source, UItemBase* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAdded(UItemTable* Source, UItemBase* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFullyChargedWeapon(UItemWeapon* Weapon, const FAttackDescription& AttackDescription);
    
    UFUNCTION(BlueprintCallable)
    void InitializeStartingEquipment();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemWaterBottle* GetWaterBottle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemEquipment* GetUtility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUsing2HandedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemWeaponBase* GetThrownWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemWeaponBase* GetSideWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemShield* GetShield() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UInteraction*> GetInteractions_Implementation(ACreature* Target, UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemWeaponBase* GetBackWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemArmour* GetArmour() const;
    
    UFUNCTION(BlueprintCallable)
    void EndSprint();
    
    UFUNCTION(BlueprintCallable)
    void DropFromLadder();
    
    UFUNCTION(BlueprintCallable)
    void DropAllEquipment();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugCallback();
    
    UFUNCTION(BlueprintCallable)
    void ClimbUpLadder();
    
    UFUNCTION(BlueprintCallable)
    void ClimbDownLadder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartSprint();
    
    
    // Fix for true pure virtual functions not being implemented
};

