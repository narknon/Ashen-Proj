#include "Humanoid.h"
#include "Net/UnrealNetwork.h"
#include "Inventory.h"

class AAction;
class UItemEquipment;
class UItemArmour;
class ANavLinkProxy;
class APlayerLootSack;
class UItemWeapon;
class UItemLantern;
class UItemTable;
class UItemWaterBottle;
class UItemBase;
class ACreature;
class UItemWeaponBase;
class UItemShield;
class UObject;
class UInteraction;

void AHumanoid::UpdateItemStateRemote_Implementation(FAshenSerialization Data) {
}

void AHumanoid::UpdateDisintegration(float DeltaSeconds) {
}

void AHumanoid::TrySprint() {
}

AAction* AHumanoid::TrySpecificRightHand(UItemEquipment* CurrentEquipment, UItemEquipment* NextEquipment, bool UserEquiped) {
    return NULL;
}

AAction* AHumanoid::TrySpecificLeftHand(UItemEquipment* CurrentEquipment, UItemEquipment* NextEquipment, bool UserEquiped) {
    return NULL;
}

void AHumanoid::TryMountLadderAI(ELadderState StartingState, const FTransform& MountTransform, int32 MaxClimbMontages, ELadderState LoopState, ANavLinkProxy* ForNavLink) {
}

void AHumanoid::TryMountLadder(ELadderState StartingState, const FTransform& MountTransform, int32 MaxClimbMontages) {
}

void AHumanoid::SprintUpLadder() {
}

APlayerLootSack* AHumanoid::SpawnSack(const FVector& Location) {
    return NULL;
}

void AHumanoid::SlideDownLadder() {
}

bool AHumanoid::ShouldResetSprint() {
    return false;
}

bool AHumanoid::ShouldEndSprint() {
    return false;
}

bool AHumanoid::ShouldCancelSprint() {
    return false;
}

UItemEquipment* AHumanoid::SetEquipment(UItemEquipment* Equipment, EEquipmentState OverrideState, EItemLocation ExistingItemDiscardLocation) {
    return NULL;
}

void AHumanoid::ResetSprint() {
}

void AHumanoid::RemoteItemRemoved_Implementation(UClass* ItemClass) {
}

void AHumanoid::RemoteItemAdded_Implementation(EItemLocation ItemLocation, UClass* ItemClass) {
}

void AHumanoid::OverlapWithLantern(UItemLantern* thisLantern) {
}

void AHumanoid::OnItemRemoved(UItemTable* Source, UItemBase* Item) {
}

void AHumanoid::OnItemAdded(UItemTable* Source, UItemBase* Item) {
}

void AHumanoid::OnFullyChargedWeapon_Implementation(UItemWeapon* Weapon, const FAttackDescription& AttackDescription) {
}

void AHumanoid::InitializeStartingEquipment() {
}

UItemWaterBottle* AHumanoid::GetWaterBottle() const {
    return NULL;
}

UItemEquipment* AHumanoid::GetUtility() const {
    return NULL;
}

bool AHumanoid::GetUsing2HandedWeapon() const {
    return false;
}

UItemWeaponBase* AHumanoid::GetThrownWeapon() const {
    return NULL;
}

UItemWeaponBase* AHumanoid::GetSideWeapon() const {
    return NULL;
}

UItemShield* AHumanoid::GetShield() const {
    return NULL;
}

TArray<UInteraction*> AHumanoid::GetInteractions_Implementation(ACreature* Target, UObject* Context) {
    return TArray<UInteraction*>();
}

UItemWeaponBase* AHumanoid::GetBackWeapon() const {
    return NULL;
}

UItemArmour* AHumanoid::GetArmour() const {
    return NULL;
}

void AHumanoid::EndSprint() {
}

void AHumanoid::DropFromLadder() {
}

void AHumanoid::DropAllEquipment() {
}


void AHumanoid::ClimbUpLadder() {
}

void AHumanoid::ClimbDownLadder() {
}

bool AHumanoid::CanStartSprint() {
    return false;
}

void AHumanoid::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHumanoid, FallState);
}

AHumanoid::AHumanoid() {
    this->HumanoidAnimInstance = NULL;
    this->WaterDragRate = NULL;
    this->TreadWaterVelocity = 80.00f;
    this->TreadWaterStamDrain = 11.00f;
    this->bCharacterCreationMesh = false;
    this->SwimAbilityEnter = 0.75f;
    this->SwimAbilityLeave = 0.73f;
    this->FallState = EFallState::None;
    this->MustLand = false;
    this->ClamberAnimationHeights.AddDefaulted(4);
    this->ClamberAnimationOffsets.AddDefaulted(4);
    this->StartingWeaponClass = NULL;
    this->ExtraWeaponClass = NULL;
    this->StartingShieldClass = NULL;
    this->StartingUtilityClass = NULL;
    this->StartingConsumableClass = NULL;
    this->StartingConsumableNumber = 1;
    this->StartingPotionClass = NULL;
    this->StartingWeaponState = EEquipmentState::Undefined;
    this->StartingExtraWeaponState = EEquipmentState::Undefined;
    this->StartingShieldState = EEquipmentState::Undefined;
    this->StartingUtilityState = EEquipmentState::Undefined;
    this->Inventory = CreateDefaultSubobject<UInventory>(TEXT("Inventory"));
    this->PreviousLeftHandItemType = EItemType::None;
    this->PreviousRightHandItemType = EItemType::None;
    this->StartingArmourClass = NULL;
    this->bManualEquipmentInitialization = false;
    this->bStartWithUtilityEquipped = false;
    this->ProjectileWeapon = NULL;
    this->IsThrowing = false;
    this->SprintCancelAngle = 170.00f;
    this->SprintStaminaCostPerSecond = 15.00f;
    this->MaxSprintingTimeout = 0.70f;
    this->SprintingTimeout = 0.00f;
    this->SprintEnding = false;
    this->SprintHeld = false;
    this->DebugCheat_SoloCoopClimber = false;
    this->LootSackActor = NULL;
    this->CurrentLootActor = NULL;
    this->CritterHarvestMontage = NULL;
    this->TargetLantern = NULL;
    this->LanternPickupInteraction = NULL;
    this->bWaitingOnLastAction = false;
    this->DodgeBlendInput = 0.00f;
    this->LeapRollHeightMax = 900.00f;
    this->LeapRollHeightMin = 580.00f;
    this->LeapRollVelocityThreshold = 580.00f;
    this->bShouldLeapRoll = false;
    this->StartLadderSlideAudioEvent = NULL;
    this->StopLadderSlideAudioEvent = NULL;
    this->WeaponFullyChargedAudioEvent = NULL;
}

