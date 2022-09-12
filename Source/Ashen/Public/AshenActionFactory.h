#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "AttackDescription.h"
#include "Engine/DataTable.h"
#include "EEquipmentState.h"
#include "ELadderState.h"
#include "UObject/NoExportTypes.h"
#include "ECustomMovementMode.h"
#include "UObject/NoExportTypes.h"
#include "EAshenDamageType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EActionType.h"
#include "Engine/EngineTypes.h"
#include "EAIContextDesire.h"
#include "EEmoteType.h"
#include "EMaxStunEffect.h"
#include "AshenActionFactory.generated.h"

class AAction;
class AWaterBottleAction;
class ACreature;
class UItemAIWeapon;
class AWeaponAttackAction;
class AAttackActionBase;
class AHumanoid;
class UItemWeapon;
class UAnimMontage;
class UItemEquipment;
class AStoryAction;
class AScionSummonGefnAction;
class AElderDark;
class AStoryHumanoid;
class ASavePointAction;
class AHero;
class ADodgeAction;
class UItemWaterBottle;
class AElderDarkSyncIntroSourceAction;
class ANavLinkProxy;
class AHeroSitAction;
class AElderDarkSyncIntroTargetAction;
class ASmallGroundCritter;
class AAIAttackActionBase;
class ADamageTakenAction;

UCLASS(Blueprintable)
class ASHEN_API UAshenActionFactory : public UObject {
    GENERATED_BODY()
public:
    UAshenActionFactory();
    UFUNCTION(BlueprintCallable)
    static AAction* TryWeaponReload(ACreature* Creature, UItemAIWeapon* Weapon, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AWeaponAttackAction* TryWeaponAttackAction(ACreature* Creature, TSubclassOf<AAttackActionBase> ActionClass, const FAttackDescription& Attack, bool bForce, UItemWeapon* Weapon, int32 SwingOffset);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryWaterDrinkAction(ACreature* Creature, const TArray<UAnimMontage*>& Montages, FVector Direction, bool bForce, bool bFromWaterPool);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryTurnToAction(ACreature* Creature, const FRotator& ToFacing, float DegreesCutOff, bool bForce, bool bAutoStart);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryToggleEquipment(AHumanoid* Humanoid, UItemEquipment* SetLeftHand, UItemEquipment* SetRightHand, EEquipmentState SetState);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryThrowAction(AHumanoid* Humanoid);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryTakeFlight(ACreature* Creature, UAnimMontage* Montage, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AStoryAction* TryStoryAction(ACreature* Creature, const TArray<UAnimMontage*>& Montages, bool Loops);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryStepBackAction(AHumanoid* Humanoid);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryStand(ACreature* Creature, UAnimMontage* Montage, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TrySit(ACreature* Creature, UAnimMontage* SitMontage, UAnimMontage* LoopMontage, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AScionSummonGefnAction* TryScionSummonGefnAction(AStoryHumanoid* Scion, UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    static ASavePointAction* TrySavePointInteractionAction(AHero* Hero, bool IsActivated, FTransform& InteractPositionTransform, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AWaterBottleAction* TryReceiveWaterAction(AHumanoid* Humanoid, UItemWaterBottle* RemoteWaterBottle, const FVector& Location, const FVector& Direction);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryPivotAction(AHumanoid* Humanoid, FVector PivotFinishDirection);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryOpenLootboxChestAction(AHumanoid* Humanoid);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryOpenLootboxAction(AHumanoid* Humanoid);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryMovementModeAction(ACreature* Creature, EActionType Type, const TArray<UAnimMontage*>& Montages, TEnumAsByte<EMovementMode> MovementMode, ECustomMovementMode CustomMode, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryMapTravelAction(AHero* Hero, bool isIntro, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryLedgeClimbAction(AHumanoid* Humandoid, int32 HeightIndex, float LedgeGrabHeight, const FVector& ClimbLocation, const FQuat& ClimbRotation, ANavLinkProxy* ForNavLink);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryLadderAction(AHumanoid* Humanoid, ELadderState StartingState, const FTransform& MountTransform, int32 MaxClimbMontages, ANavLinkProxy* ForNavLink, bool bStart);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryKnockdownAction(ACreature* Creature, FVector ReceiverLocation, FVector SenderLocation);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryIdle(ACreature* Creature, UAnimMontage* EnterMontage, UAnimMontage* LoopMontage, UAnimMontage* EndMontage, UAnimMontage* EndFastMontage, bool bForce, EAIContextDesire ForDesire, bool bNeverLoDFreeze, float IdleHeadLookAlpha, bool bImmuneToInterupt, bool bUseAdditiveForTalking);
    
    UFUNCTION(BlueprintCallable)
    static AHeroSitAction* TryHeroSitWater(AHero* Hero, bool bPlayIntroMontage, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AHeroSitAction* TryHeroSit(AHero* Hero, bool bPlayIntroMontage, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryHeroIntrinsicAttack(AHero* Hero, const FDataTableRowHandle& IntrinsicAttack, int32 MontageIndex, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryEvade(ACreature* Creature, const FDataTableRowHandle& EvadeDescription, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryEquipSpecificRightHandAction(AHumanoid* Humanoid, UItemEquipment* CurrentEquipment, UItemEquipment* NextRef, bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryEquipSpecificLeftHandAction(AHumanoid* Humanoid, UItemEquipment* CurrentEquipment, UItemEquipment* NextRef, bool& bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryEmote(ACreature* Creature, UAnimMontage* Montage, EEmoteType EmoteType, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static bool TryElderDarkIntroSynchronizedAction(AElderDark* Source, AHero* Target, AElderDarkSyncIntroSourceAction*& SourceActionResult, AElderDarkSyncIntroTargetAction*& TargetActionResult);
    
    UFUNCTION(BlueprintCallable)
    static ADodgeAction* TryDodgeAction(AHumanoid* Humanoid, EActionType Type, const TArray<UAnimMontage*>& Montages, FVector Direction, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryDismountDiasora(ACreature* Creature, UAnimMontage* Montage, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryDirectionClassedAction(ACreature* Creature, EActionType Type, const TArray<UAnimMontage*>& Montages, FVector Direction, TSubclassOf<AAction> ActionClass, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryDirectionAction(ACreature* Creature, EActionType Type, const TArray<UAnimMontage*>& Montages, FVector Direction, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryDamagedTakenAction(ACreature* Creature, const TArray<UAnimMontage*>& Montages, EMaxStunEffect DamageStunEffect, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryCritterHarvestAction(AHumanoid* Humanoid, ASmallGroundCritter* Critter, UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryCloseLootboxAction(AHumanoid* Humanoid);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryClassedAction(ACreature* Creature, EActionType Type, const TArray<UAnimMontage*>& Montages, TSubclassOf<AAction> ActionClass, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryClamberAction(AHumanoid* Humanoid, int32 HeightIndex, float ClamberHeight, const FVector& ClimbLocation, const FQuat& ClimbRotation, ANavLinkProxy* ForNavLink);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryAlertAlliesOfTarget(ACreature* Creature, const TArray<ACreature*>& Allies, bool bUseLeftAnim, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AAIAttackActionBase* TryAIWeaponAttack(ACreature* Creature, const FDataTableRowHandle& AttackDescription, bool bForce, bool bStart);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryAIPinAttackAction(ACreature* Creature, ACreature* TargetCreature, const FDataTableRowHandle& AttackDescription);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryAimAction(AHero* Hero, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryAIJumpLedgeGrabAction(ACreature* Creature, const FVector& ClimbPoint, const FVector& ClamberPoint, const FVector& Destination, const FVector& Apex, float VelocityMod, ANavLinkProxy* ForNavLink, bool bAutoStart);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryAIJumpAction(ACreature* Creature, const FVector& Destination, const FVector& Apex, float VelocityMod, ANavLinkProxy* ForNavLink, bool bAutoStart);
    
    UFUNCTION(BlueprintCallable)
    static AAction* TryAction(ACreature* Creature, EActionType Type, const TArray<UAnimMontage*>& Montages, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static AAction* ForceEquipAction(AHumanoid* Humanoid, UItemEquipment* CurrentEquipment, UItemEquipment* Equipment);
    
    UFUNCTION(BlueprintCallable)
    static AAction* CreateDeathAction(ACreature* Creature, const TArray<UAnimMontage*>& Montages, EAshenDamageType KillingDamageType);
    
    UFUNCTION(BlueprintCallable)
    static ADamageTakenAction* CreateDamageTakenAction(ACreature* Creature, const TArray<UAnimMontage*>& Montages, EMaxStunEffect DamageStunEffect);
    
};

