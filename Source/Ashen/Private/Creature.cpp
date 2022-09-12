#include "Creature.h"
#include "Net/UnrealNetwork.h"
#include "AkComponent.h"
#include "NetworkComponent.h"
#include "VitalAttributes.h"
#include "PushTarget.h"
#include "DeathAction.h"

class UItemWeaponBase;
class ACreature;
class AAction;
class UAkAudioEvent;
class UAshenAnimMetronomeNotify;
class UAshenAnimNotify;
class UAshenMovementComponent;

void ACreature::UpdateSpawnFade(float DeltaSeconds) {
}

void ACreature::UpdateDisintegration(float DeltaSeconds) {
}

void ACreature::SynchronizeRemote_Implementation(FAshenSerialization ActionData, bool bIsWoken, FVector Location, FRotator Rotation, TEnumAsByte<EMovementMode> MovementMode, FName ColProfile, FName ColProfileBeforeSleep) {
}

void ACreature::SpawnDebugArmEffects() {
}

void ACreature::SetTargetCreature(ACreature* NewTargetCreature, FName LockonSocket) {
}

void ACreature::SetPoiseEnabledState(bool NewState) {
}

void ACreature::SetInvulnerable() {
}

void ACreature::SetBlocking(bool Enabled) {
}

void ACreature::SetAkSwitchState(const FString& SwitchGroup, const FString& SwitchState) {
}

void ACreature::ResetCombatStance() {
}

void ACreature::RemoteSendActionData(AAction* Sender, FAshenSerialization& ActionData) {
}

void ACreature::RefreshCombatStance() {
}

bool ACreature::QueryCurrentAction(EActionType Type, EActionState State, bool IgnoreState) const {
    return false;
}

void ACreature::PostAudioEventAtLocation(UAkAudioEvent* AudioEvent, const FVector& WorldLocation) {
}

void ACreature::PostAudioEvent(UAkAudioEvent* AudioEvent) {
}

void ACreature::PlayFlinchMontageRemote_Implementation(FVector Direction) {
}

void ACreature::PlayCreatureDamageEffectsOnProxy_Implementation(FAshenDamage Damage, bool SkipEffect, bool SkipSound) {
}

void ACreature::OpenChannelRPC_Implementation() {
}

void ACreature::OnWakeMe_Implementation(bool bIsFirstWake) {
}

void ACreature::OnSleepMe_Implementation() {
}

void ACreature::OnRespondToAlert_Implementation(ACreature* ToCreature, ACreature* FromCreature, int32 DistOrderInAlert) {
}

void ACreature::OnMetronomeNotify(const UAshenAnimMetronomeNotify* MetronomeNotify) {
}

void ACreature::OnDeathDisintegrate_Implementation() {
}

void ACreature::OnDamage(FAshenDamage& Damage, bool bFromRemote) {
}



void ACreature::OnActionStateChange(AAction* Action, EActionState Current, EActionState Previous) {
}

void ACreature::Notify(const UAshenAnimNotify* AshenNotify) {
}

void ACreature::NavWalkingChangeRemote_Implementation(bool bEnabled) {
}

bool ACreature::IsStunned() const {
    return false;
}

bool ACreature::IsStaminaGreaterThanZero() const {
    return false;
}

bool ACreature::IsStaminaGreaterThanMinimum() const {
    return false;
}

bool ACreature::IsStaggered() const {
    return false;
}

bool ACreature::IsSleeping() const {
    return false;
}

bool ACreature::IsReadyToStartAttack() const {
    return false;
}

void ACreature::IsReadyToMove(bool& ReadyToMove) const {
}

void ACreature::IsReadyToBlock(bool& ReadyToBlock) const {
}

void ACreature::IsReadyNeutral(bool& ReadyNeutral) const {
}

bool ACreature::IsPerformingActionOfType(EActionType ActionType) const {
    return false;
}

bool ACreature::IsKnockedDown() const {
    return false;
}

bool ACreature::IsInvulnerableTo(EAshenDamageType DamageType) const {
    return false;
}

bool ACreature::IsBlocking(const FAshenDamage& Damage) {
    return false;
}

bool ACreature::IsBackstab(const FAshenDamage& Damage) {
    return false;
}

bool ACreature::IsAlive() const {
    return false;
}

bool ACreature::HasCustomLockOnBarLocation(FVector& OutWorldSpaceLocation) {
    return false;
}

bool ACreature::HasAttackEnded() const {
    return false;
}

bool ACreature::HasAttackAction() const {
    return false;
}

UItemWeaponBase* ACreature::GetWeapon() const {
    return NULL;
}

bool ACreature::GetUsing2HandedWeapon() const {
    return false;
}

bool ACreature::GetReadyNeutral() const {
    return false;
}

ACreature* ACreature::GetPreviousTargetCreature() const {
    return NULL;
}

float ACreature::GetLastTimeRendered() const {
    return 0.0f;
}

FVector ACreature::GetHeroLockOnLocation(FName LockonPointName, const ACreature* RequestingHero) const {
    return FVector{};
}

FVector ACreature::GetHeroLockOnFocus(FName LockonPointName, const ACreature* RequestingHero) const {
    return FVector{};
}

UAshenMovementComponent* ACreature::GetAshenMovementComponent() const {
    return NULL;
}

bool ACreature::DoesMovementStateEqual(TEnumAsByte<EMovementMode> MovementMode, ECustomMovementMode CustomMode) const {
    return false;
}

void ACreature::ClearInvulnerability() {
}

void ACreature::CancelAction() {
}

bool ACreature::CanBeLockedOnto(const ACreature* Observer) const {
    return false;
}

bool ACreature::CanBeImpaled() const {
    return false;
}

float ACreature::CalculateHeightSubmerged() {
    return 0.0f;
}

void ACreature::AuthoritySendActionDataUnreliable(AAction* Sender, FAshenSerialization& ActionData) {
}

void ACreature::AuthoritySendActionData(AAction* Sender, FAshenSerialization& ActionData) {
}

void ACreature::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACreature, CombatStanceTimeout);
    DOREPLIFETIME(ACreature, bIsInCombatStance);
    DOREPLIFETIME(ACreature, bIsBlocking);
    DOREPLIFETIME(ACreature, TargetHeadLookYaw);
    DOREPLIFETIME(ACreature, TargetHeadLookPitch);
    DOREPLIFETIME(ACreature, TargetHeadLookAlpha);
    DOREPLIFETIME(ACreature, TargetSpineBendPitch);
    DOREPLIFETIME(ACreature, LockOnUpdatedWhileStationary);
    DOREPLIFETIME(ACreature, LockOnRotationDelta);
    DOREPLIFETIME(ACreature, bIsStrafing);
    DOREPLIFETIME(ACreature, IsWounded);
    DOREPLIFETIME(ACreature, bInvisibleToAI);
    DOREPLIFETIME(ACreature, bIgnoreHeroHits);
    DOREPLIFETIME(ACreature, bImmuneToRepulseColliders);
}

ACreature::ACreature() {
    this->LandingCutoff = 0.00f;
    this->RagdollPushStrengthThreshold = 200.00f;
    this->RagdollPushStrengthMultiplier = 2.00f;
    this->bCanFreeze = true;
    this->bFrozen = false;
    this->remainingFreezeDuration = 0.00f;
    this->NetworkComponent = CreateDefaultSubobject<UNetworkComponent>(TEXT("NetworkComponent"));
    this->bIsPlayerNPC = false;
    this->bCreatureCanSleepWake = true;
    this->bCheckMinWakeFromSpawner = true;
    this->WakeZScale = 1.00f;
    this->ForceSleepCheckRange = 10000.00f;
    this->SleepCheckPulseTimer = 2.00f;
    this->SleepCountdownTimer = 1.00f;
    this->NavWakeRadius = 10000.00f;
    this->NavSleepRadius = 15000.00f;
    this->CollisionProfilePostSpawn = TEXT("Pawn");
    this->DefaultMeshCollisionProfile = TEXT("CreatureMeshProfile");
    this->AshenMovementComponent = NULL;
    this->SimpleAnimInstance = NULL;
    this->GameMode = NULL;
    this->GameState = NULL;
    this->GameInstance = NULL;
    this->NoActionLoDFreezeMinRadius = 3000.00f;
    this->OverrideControllerType = NULL;
    this->RootBehaviourTree = NULL;
    this->AshenAIController = NULL;
    this->PerceptionComponent = NULL;
    this->CombatAIComponent = NULL;
    this->CommanderComponent = NULL;
    this->RelationshipComponent = NULL;
    this->AvoidenceComponent = NULL;
    this->NavigationInvokerComponent = NULL;
    this->AIFootIKComponent = NULL;
    this->CreatureEffectsComponent = NULL;
    this->AISpawner = NULL;
    this->AIDefaultThreatAIConeHalfAngle = 60.00f;
    this->AIDefaultThreatAIConeLength = 600.00f;
    this->EquipmentScale = 1.00f;
    this->SimulatedProxyPerceptionUpdateTime = 0.25f;
    this->MaxCombatStanceTimeout = 3.00f;
    this->CombatStanceTimeout = 0.00f;
    this->bIsInCombatStance = false;
    this->bIsBlocking = false;
    this->Metronome = 0.00f;
    this->MetronomeTickDuration = 0.12f;
    this->CurrentAction = NULL;
    this->CurrencyDropped = 0;
    this->CurrencyDropMultiplayerRadius = 1000.00f;
    this->LowThresholdDamageReduction = 0.00f;
    this->MidThresholdDamageReduction = 2.00f;
    this->HighThresholdDamageReduction = 10.00f;
    this->DiasaroBreathImmunityOverlaps = 0;
    this->ImpactAudioEvent = NULL;
    this->ImpactAttackTypeSwitchGroup = TEXT("Combat_Weapon_Type");
    this->ImpactAttackWeightSwitchGroup = TEXT("Combat_Hit_Strength");
    this->CriticalHitSwitchStateSuffix = TEXT("_Crit");
    this->bNavWalkingAllowed = true;
    this->NavWalkingSafeZone = 700.00f;
    this->bUseAltWeaponHoldPoint = false;
    this->SpawnLootOnDeath = NULL;
    this->bLimitDropCount = false;
    this->MaxNumDrops = 0;
    this->NpcAcquiredKilledAmount = 1.00f;
    this->bImmuneToWaterDeath = false;
    this->TargetCreature = NULL;
    this->PreviousTargetCreature = NULL;
    this->bCanBeLockedOn = true;
    this->bBlockHeroLockOn = false;
    this->bDisplayLockOnHealthBar = false;
    this->LockOnHealthBarHeightModifier = 0.00f;
    this->bLockOnSupported = false;
    this->LockOnDistance = 10000.00f;
    this->LockOnSpeed = 3.00f;
    this->bLockOnUsesAnimation = false;
    this->LockOnAnimationBlockedSpeed = 0.00f;
    this->bSpineBendSupported = false;
    this->SpineBendSpeed = 0.00f;
    this->SpineBendLimit = 0.00f;
    this->bHeadLookSupported = false;
    this->HeadPitchSpeed = 0.00f;
    this->HeadPitchLimit = 0.00f;
    this->HeadYawSpeed = 0.00f;
    this->HeadYawLimit = 0.00f;
    this->HeadYawStopLookAtScale = 1.50f;
    this->bLockOnEnabled = true;
    this->bLockRotateToTarget = false;
    this->TargetHeadLookYaw = 0.00f;
    this->TargetHeadLookPitch = 0.00f;
    this->TargetHeadLookAlpha = 1.00f;
    this->TargetSpineBendPitch = 0.00f;
    this->LockOnActionOverride = false;
    this->LockOnUpdatedWhileStationary = false;
    this->LockOnRotationDelta = 0.00f;
    this->LockOnTurnActionCutOffDegrees = 50.00f;
    this->UseDefaultLockonPoint = true;
    this->bIsStrafing = false;
    this->VitalAttributes = CreateDefaultSubobject<UVitalAttributes>(TEXT("VitalAttributes"));
    this->PushTarget = CreateDefaultSubobject<UPushTarget>(TEXT("PushTarget"));
    this->IsWounded = false;
    this->StepFallDistance = 0.00f;
    this->StepFallDamage = 0.00f;
    this->LightFallLandDistance = 0.00f;
    this->LightFallLandDamage = 0.00f;
    this->MediumFallLandDistance = 0.00f;
    this->MediumFallLandDamage = 0.00f;
    this->LargeFallDistance = 0.00f;
    this->LargeFallLandDamage = 0.00f;
    this->DeathFallDistance = 0.00f;
    this->StartingZ = 0.00f;
    this->FallDistance = 0.00f;
    this->bInvisibleToAI = false;
    this->bAlwaysConsiderForAIFollowerLoS = false;
    this->bIgnoreHeroHits = false;
    this->bImmuneToRepulseColliders = false;
    this->BaseCriticalHitMultiplierTimeout = 3.00f;
    this->CreatureWeight = EWeight::None;
    this->SoundLevel = ESoundLevel::Normal;
    this->bCanBeImpaled = false;
    this->bUseCreaturePosForBloodLoc = false;
    this->AkAudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    this->SpawnFadeRate = 1.00f;
    this->bCreateCreatureFadeProxyOnSync = true;
    this->bIgnoreSpawnFade = false;
    this->bIgnoreDynamicMaterials = false;
    this->FadeMaterialParameter = TEXT("Follower_Fade");
    this->DeathDisintegrateMaterialParameter = TEXT("Disintegrate");
    this->DeathActionClass = ADeathAction::StaticClass();
    this->DisintegrateRate = 0.14f;
    this->RequireDynamicMaterialsAtSpawn = false;
    this->DebugArmEffects = NULL;
}

