#include "AshenActionFactory.h"
#include "Templates/SubclassOf.h"

class UAnimMontage;
class AWaterBottleAction;
class ACreature;
class UItemAIWeapon;
class AAction;
class AAttackActionBase;
class AHumanoid;
class UItemWeapon;
class AWeaponAttackAction;
class UItemEquipment;
class AStoryAction;
class AElderDark;
class AStoryHumanoid;
class AScionSummonGefnAction;
class AHero;
class ADodgeAction;
class ASavePointAction;
class UItemWaterBottle;
class AElderDarkSyncIntroSourceAction;
class ANavLinkProxy;
class AHeroSitAction;
class AElderDarkSyncIntroTargetAction;
class ASmallGroundCritter;
class AAIAttackActionBase;
class ADamageTakenAction;

AAction* UAshenActionFactory::TryWeaponReload(ACreature* Creature, UItemAIWeapon* Weapon, bool bForce) {
    return NULL;
}

AWeaponAttackAction* UAshenActionFactory::TryWeaponAttackAction(ACreature* Creature, TSubclassOf<AAttackActionBase> ActionClass, const FAttackDescription& Attack, bool bForce, UItemWeapon* Weapon, int32 SwingOffset) {
    return NULL;
}

AAction* UAshenActionFactory::TryWaterDrinkAction(ACreature* Creature, const TArray<UAnimMontage*>& Montages, FVector Direction, bool bForce, bool bFromWaterPool) {
    return NULL;
}

AAction* UAshenActionFactory::TryTurnToAction(ACreature* Creature, const FRotator& ToFacing, float DegreesCutOff, bool bForce, bool bAutoStart) {
    return NULL;
}

AAction* UAshenActionFactory::TryToggleEquipment(AHumanoid* Humanoid, UItemEquipment* SetLeftHand, UItemEquipment* SetRightHand, EEquipmentState SetState) {
    return NULL;
}

AAction* UAshenActionFactory::TryThrowAction(AHumanoid* Humanoid) {
    return NULL;
}

AAction* UAshenActionFactory::TryTakeFlight(ACreature* Creature, UAnimMontage* Montage, bool bForce) {
    return NULL;
}

AStoryAction* UAshenActionFactory::TryStoryAction(ACreature* Creature, const TArray<UAnimMontage*>& Montages, bool Loops) {
    return NULL;
}

AAction* UAshenActionFactory::TryStepBackAction(AHumanoid* Humanoid) {
    return NULL;
}

AAction* UAshenActionFactory::TryStand(ACreature* Creature, UAnimMontage* Montage, bool bForce) {
    return NULL;
}

AAction* UAshenActionFactory::TrySit(ACreature* Creature, UAnimMontage* SitMontage, UAnimMontage* LoopMontage, bool bForce) {
    return NULL;
}

AScionSummonGefnAction* UAshenActionFactory::TryScionSummonGefnAction(AStoryHumanoid* Scion, UAnimMontage* Montage) {
    return NULL;
}

ASavePointAction* UAshenActionFactory::TrySavePointInteractionAction(AHero* Hero, bool IsActivated, FTransform& InteractPositionTransform, bool bForce) {
    return NULL;
}

AWaterBottleAction* UAshenActionFactory::TryReceiveWaterAction(AHumanoid* Humanoid, UItemWaterBottle* RemoteWaterBottle, const FVector& Location, const FVector& Direction) {
    return NULL;
}

AAction* UAshenActionFactory::TryPivotAction(AHumanoid* Humanoid, FVector PivotFinishDirection) {
    return NULL;
}

AAction* UAshenActionFactory::TryOpenLootboxChestAction(AHumanoid* Humanoid) {
    return NULL;
}

AAction* UAshenActionFactory::TryOpenLootboxAction(AHumanoid* Humanoid) {
    return NULL;
}

AAction* UAshenActionFactory::TryMovementModeAction(ACreature* Creature, EActionType Type, const TArray<UAnimMontage*>& Montages, TEnumAsByte<EMovementMode> MovementMode, ECustomMovementMode CustomMode, bool bForce) {
    return NULL;
}

AAction* UAshenActionFactory::TryMapTravelAction(AHero* Hero, bool isIntro, bool bForce) {
    return NULL;
}

AAction* UAshenActionFactory::TryLedgeClimbAction(AHumanoid* Humandoid, int32 HeightIndex, float LedgeGrabHeight, const FVector& ClimbLocation, const FQuat& ClimbRotation, ANavLinkProxy* ForNavLink) {
    return NULL;
}

AAction* UAshenActionFactory::TryLadderAction(AHumanoid* Humanoid, ELadderState StartingState, const FTransform& MountTransform, int32 MaxClimbMontages, ANavLinkProxy* ForNavLink, bool bStart) {
    return NULL;
}

AAction* UAshenActionFactory::TryKnockdownAction(ACreature* Creature, FVector ReceiverLocation, FVector SenderLocation) {
    return NULL;
}

AAction* UAshenActionFactory::TryIdle(ACreature* Creature, UAnimMontage* EnterMontage, UAnimMontage* LoopMontage, UAnimMontage* EndMontage, UAnimMontage* EndFastMontage, bool bForce, EAIContextDesire ForDesire, bool bNeverLoDFreeze, float IdleHeadLookAlpha, bool bImmuneToInterupt, bool bUseAdditiveForTalking) {
    return NULL;
}

AHeroSitAction* UAshenActionFactory::TryHeroSitWater(AHero* Hero, bool bPlayIntroMontage, bool bForce) {
    return NULL;
}

AHeroSitAction* UAshenActionFactory::TryHeroSit(AHero* Hero, bool bPlayIntroMontage, bool bForce) {
    return NULL;
}

AAction* UAshenActionFactory::TryHeroIntrinsicAttack(AHero* Hero, const FDataTableRowHandle& IntrinsicAttack, int32 MontageIndex, bool bForce) {
    return NULL;
}

AAction* UAshenActionFactory::TryEvade(ACreature* Creature, const FDataTableRowHandle& EvadeDescription, bool bForce) {
    return NULL;
}

AAction* UAshenActionFactory::TryEquipSpecificRightHandAction(AHumanoid* Humanoid, UItemEquipment* CurrentEquipment, UItemEquipment* NextRef, bool& bSucceeded) {
    return NULL;
}

AAction* UAshenActionFactory::TryEquipSpecificLeftHandAction(AHumanoid* Humanoid, UItemEquipment* CurrentEquipment, UItemEquipment* NextRef, bool& bSucceeded) {
    return NULL;
}

AAction* UAshenActionFactory::TryEmote(ACreature* Creature, UAnimMontage* Montage, EEmoteType EmoteType, bool bForce) {
    return NULL;
}

bool UAshenActionFactory::TryElderDarkIntroSynchronizedAction(AElderDark* Source, AHero* Target, AElderDarkSyncIntroSourceAction*& SourceActionResult, AElderDarkSyncIntroTargetAction*& TargetActionResult) {
    return false;
}

ADodgeAction* UAshenActionFactory::TryDodgeAction(AHumanoid* Humanoid, EActionType Type, const TArray<UAnimMontage*>& Montages, FVector Direction, bool bForce) {
    return NULL;
}

AAction* UAshenActionFactory::TryDismountDiasora(ACreature* Creature, UAnimMontage* Montage, bool bForce) {
    return NULL;
}

AAction* UAshenActionFactory::TryDirectionClassedAction(ACreature* Creature, EActionType Type, const TArray<UAnimMontage*>& Montages, FVector Direction, TSubclassOf<AAction> ActionClass, bool bForce) {
    return NULL;
}

AAction* UAshenActionFactory::TryDirectionAction(ACreature* Creature, EActionType Type, const TArray<UAnimMontage*>& Montages, FVector Direction, bool bForce) {
    return NULL;
}

AAction* UAshenActionFactory::TryDamagedTakenAction(ACreature* Creature, const TArray<UAnimMontage*>& Montages, EMaxStunEffect DamageStunEffect, bool bForce) {
    return NULL;
}

AAction* UAshenActionFactory::TryCritterHarvestAction(AHumanoid* Humanoid, ASmallGroundCritter* Critter, UAnimMontage* Montage) {
    return NULL;
}

AAction* UAshenActionFactory::TryCloseLootboxAction(AHumanoid* Humanoid) {
    return NULL;
}

AAction* UAshenActionFactory::TryClassedAction(ACreature* Creature, EActionType Type, const TArray<UAnimMontage*>& Montages, TSubclassOf<AAction> ActionClass, bool bForce) {
    return NULL;
}

AAction* UAshenActionFactory::TryClamberAction(AHumanoid* Humanoid, int32 HeightIndex, float ClamberHeight, const FVector& ClimbLocation, const FQuat& ClimbRotation, ANavLinkProxy* ForNavLink) {
    return NULL;
}

AAction* UAshenActionFactory::TryAlertAlliesOfTarget(ACreature* Creature, const TArray<ACreature*>& Allies, bool bUseLeftAnim, bool bForce) {
    return NULL;
}

AAIAttackActionBase* UAshenActionFactory::TryAIWeaponAttack(ACreature* Creature, const FDataTableRowHandle& AttackDescription, bool bForce, bool bStart) {
    return NULL;
}

AAction* UAshenActionFactory::TryAIPinAttackAction(ACreature* Creature, ACreature* TargetCreature, const FDataTableRowHandle& AttackDescription) {
    return NULL;
}

AAction* UAshenActionFactory::TryAimAction(AHero* Hero, bool bForce) {
    return NULL;
}

AAction* UAshenActionFactory::TryAIJumpLedgeGrabAction(ACreature* Creature, const FVector& ClimbPoint, const FVector& ClamberPoint, const FVector& Destination, const FVector& Apex, float VelocityMod, ANavLinkProxy* ForNavLink, bool bAutoStart) {
    return NULL;
}

AAction* UAshenActionFactory::TryAIJumpAction(ACreature* Creature, const FVector& Destination, const FVector& Apex, float VelocityMod, ANavLinkProxy* ForNavLink, bool bAutoStart) {
    return NULL;
}

AAction* UAshenActionFactory::TryAction(ACreature* Creature, EActionType Type, const TArray<UAnimMontage*>& Montages, bool bForce) {
    return NULL;
}

AAction* UAshenActionFactory::ForceEquipAction(AHumanoid* Humanoid, UItemEquipment* CurrentEquipment, UItemEquipment* Equipment) {
    return NULL;
}

AAction* UAshenActionFactory::CreateDeathAction(ACreature* Creature, const TArray<UAnimMontage*>& Montages, EAshenDamageType KillingDamageType) {
    return NULL;
}

ADamageTakenAction* UAshenActionFactory::CreateDamageTakenAction(ACreature* Creature, const TArray<UAnimMontage*>& Montages, EMaxStunEffect DamageStunEffect) {
    return NULL;
}

UAshenActionFactory::UAshenActionFactory() {
}

