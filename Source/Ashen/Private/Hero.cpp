#include "Hero.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/PostProcessComponent.h"
#include "HeroVitalAttributes.h"
#include "InteractiveQueueComponent.h"
#include "Camera/CameraComponent.h"
#include "AshenSpringArmComponent.h"
#include "HeroFeedbackComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"

class UInteraction;
class ACreature;
class UItemEquipment;
class UItemConsumable;
class UCurveVector;
class ACoopClamberAction;
class UObject;
class UAshenStateSave;
class UAnimInstance;
class AQuestPoint;
class UBuffEffect;
class UItemTalismanBase;
class UItemRelicBase;
class AQuestPathfindingPoint;
class UItemTable;
class UItemBase;
class USkeletalMesh;
class UPhysicsAsset;

void AHero::WaterRefillCallback(UInteraction* Source, ACreature* Target) {
}

void AHero::TryUseSpecificConsumableItem(UItemConsumable* ConsumableRef) {
}

void AHero::TrySitWaterAction() {
}

ACoopClamberAction* AHero::TryRecieveCoopClamberOffer(bool BoostType, const FVector& LerpLocation, const FVector& LerpDirection) {
    return NULL;
}

bool AHero::TryLightAttack(int32 SwingOffset) {
    return false;
}

void AHero::TryCoopClamberOffer(bool BoostType, bool bTimeoutEnabled, float TimeoutSecs) {
}

void AHero::SynchronizeRemoteItems_Implementation(const FRemoteItemsNetworkData& RemoteItemsNetworkData) {
}

void AHero::SynchronizeRemoteHero_Implementation(bool bHardcoreModeMeshHidden) {
}

void AHero::SwitchGender() {
}

void AHero::SpawnWeapon(TSubclassOf<UItemEquipment> UseWeapon) {
}

void AHero::ShowBossBars(ACreature* Boss) {
}

void AHero::ShareWaterCallback(UInteraction* Source, ACreature* Target) {
}

void AHero::SetTargetCreature(ACreature* NewTargetCreature, FName LockonSocket) {
}

void AHero::SetShakeCurve(UCurveVector* SetTo) {
}

void AHero::SetPlayerPositionLock(UAshenStateSave* AshenStateData) {
}

void AHero::SetPendingDiasoraLanding(bool Value) {
}


void AHero::SetBeDungeonStyleUI(UAshenStateSave* AshenStateData) {
}

void AHero::ServerAddToDebugDPS_Implementation(float Damage) {
}
bool AHero::ServerAddToDebugDPS_Validate(float Damage) {
    return true;
}

void AHero::RescueInteractionCallback(UInteraction* Source, ACreature* Target) {
}

void AHero::RemoveQuestItem(EQuestItem QuestItemID, bool UI_Fanfare, int32 NumStacks, bool DelayedUIFanfare) {
}

void AHero::RemoveBuff(UBuffEffect* BuffEffect) {
}

void AHero::RemoveAndUnequipTalisman(TSubclassOf<UItemTalismanBase> TalismanClass, bool UI_Fanfare, bool& Removed) {
}

void AHero::RemoteSyncRelicData_Implementation(FAshenSerialization NetworkData) {
}

void AHero::RemoteSendTalismanNetworkData(FAshenSerialization NetworkData) {
}

void AHero::RemoteRelicUnequipped_Implementation() {
}

void AHero::RemoteRelicEquipped_Implementation(TSubclassOf<UItemRelicBase> RelicClass) {
}

void AHero::RemoteReceiveTalismanNetworkData_Implementation(FAshenSerialization NetworkData) {
}

void AHero::RefreshLocalizedInteractions() {
}

void AHero::ReadyToAddNPCBarToHUD_Implementation(bool& ReadyToAdd) {
}



void AHero::PingQuestPosition_Implementation(FVector QuestMarkerLocation) {
}

AQuestPathfindingPoint* AHero::PingQuestPointRepathed(const AQuestPoint* QuestPointRef, float ProximityRadius) const {
    return NULL;
}

void AHero::PingPosition_Implementation() {
}

void AHero::OnTakenDamage_Implementation() {
}


void AHero::OnRelicUnEquipped(UItemTable* Source, UItemBase* Item) {
}

void AHero::OnRelicEquipped(UItemTable* Source, UItemBase* Item) {
}

void AHero::OnMultiplayerFinalised() {
}

void AHero::OnItemRemoved(UItemTable* Source, UItemBase* Item) {
}

void AHero::OnItemChanged(UItemTable* Source, UItemBase* Item) {
}

void AHero::OnItemAdded(UItemTable* Source, UItemBase* Item) {
}

void AHero::OffsetCamera(float DeltaSeconds) {
}

void AHero::MessageToClient_Implementation(const FString& Msg) {
}

void AHero::MessageToAuthority_Implementation(const FString& Msg) {
}
bool AHero::MessageToAuthority_Validate(const FString& Msg) {
    return true;
}

void AHero::LanternPickupCallback(UInteraction* Source, ACreature* Target) {
}

bool AHero::IsStrafing() const {
    return false;
}

bool AHero::IsReadyNeutral() const {
    return false;
}

bool AHero::IsPlungeFalling() const {
    return false;
}

bool AHero::IsPingActive() const {
    return false;
}

bool AHero::IsLocalPlayer() const {
    return false;
}

bool AHero::IsEngagedInCombat() const {
    return false;
}

void AHero::InitializeStartingTalismans() {
}

void AHero::InitializeStartingEquipment() {
}

void AHero::HostFinaliseMultiplayer_Implementation() {
}

void AHero::HideItem(UItemTable* Source, UItemBase* Item) {
}

void AHero::HasWaterBuff(bool& WaterBuff) {
}

bool AHero::HasQuestItem(EQuestItem QuestItemID, int32 Count) const {
    return false;
}

bool AHero::GiveRewardItem(TSubclassOf<UItemBase> ItemClass, bool UI_Fanfare, int32& Index, UItemBase*& Item, EItemLocation LocationOverride, int32 StackAmount, bool DelayUIFanfare) {
    return false;
}

void AHero::GiveDebugLantern() {
}

bool AHero::GetPendingDiasoraLanding() {
    return false;
}

FVector AHero::GetLockonWorldPosition(bool PreviousLockon) const {
    return FVector{};
}

ELightLevel AHero::GetLightLevel() const {
    return ELightLevel::Undefined;
}

TArray<UInteraction*> AHero::GetInteractions_Implementation(ACreature* Target, UObject* Context) {
    return TArray<UInteraction*>();
}

FHeroCombatState AHero::GetHeroCombatState() const {
    return FHeroCombatState{};
}

float AHero::GetDrowningProgress() const {
    return 0.0f;
}

float AHero::GetCurrentRightHandSocketIKAlpha() const {
    return 0.0f;
}

void AHero::GetCurrentRightHandIKResult(FAIHandIKResult& RightHandResult) const {
}

void AHero::GetCurrentLeftHandIKResult(FAIHandIKResult& LeftHandResult) const {
}

TArray<UInteraction*> AHero::GetAlerts() {
    return TArray<UInteraction*>();
}

void AHero::FloorCheck() {
}

void AHero::DownedResponseCallback(UInteraction* Source, ACreature* Target) {
}

void AHero::DispMessage(const FString& Msg) {
}

void AHero::CoopClamberCallback(UInteraction* Source, ACreature* Target) {
}

void AHero::ClientSyncHeroMaxHealth_Implementation(float HeroMaxHealth) {
}

void AHero::ClientNpcAcquisitionPointUpdate_Implementation(float Delta) {
}

void AHero::ClientFinaliseMultiplayer_Implementation() {
}
bool AHero::ClientFinaliseMultiplayer_Validate() {
    return true;
}

void AHero::ClamberCallback(UInteraction* Source, ACreature* Target) {
}

void AHero::CheckAndSetInTownState(const FAreaData& AreaData) {
}

void AHero::ChangeOutfitToDefault(bool& bChanged, bool ChangePhysicsOnly) {
}

void AHero::ChangeOutfit(bool& bChanged, USkeletalMesh* ChangeToMesh, UPhysicsAsset* NewPhysics, bool bUseHair, bool ScaleMesh, bool ChangePhysicsOnly, TSubclassOf<UAnimInstance> NewAnimBP) {
}

void AHero::ChangeGender(bool Male) {
}

void AHero::CameraShake(float DeltaSeconds) {
}

void AHero::CalculateLockOnDistance(const FRaidenData& RaidenData) {
}

FVector AHero::CalculateHairForce(float DeltaTime, float WindOscilation, float WindStrength, float GustMin, float GustMax, float WindAlpha, float PlayerVelocityScalar, float& WindRand, float& WindTimeline) {
    return FVector{};
}

void AHero::CalculateCameraLag(const FRaidenData& RaidenData) {
}

void AHero::AuthoritySendTalismanNetworkData(FAshenSerialization NetworkData) {
}

void AHero::AuthorityReceiveTalismanNetworkData_Implementation(FAshenSerialization NetworkData) {
}
bool AHero::AuthorityReceiveTalismanNetworkData_Validate(FAshenSerialization NetworkData) {
    return true;
}

UBuffEffect* AHero::ApplyBuff(TSubclassOf<UBuffEffect> BuffEffect, EBuffType BuffType) {
    return NULL;
}

void AHero::AlertCallback(UInteraction* Source, ACreature* Target) {
}

void AHero::AddAndEquipTalisman(TSubclassOf<UItemTalismanBase> TalismanClass, bool UI_Fanfare, bool& Added) {
}

void AHero::ActivateBossBarsAuthority_Implementation(FGuid BossGUID) {
}
bool AHero::ActivateBossBarsAuthority_Validate(FGuid BossGUID) {
    return true;
}

void AHero::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHero, IsAiming);
    DOREPLIFETIME(AHero, ReplicatedLockOnPitchAdjustment);
    DOREPLIFETIME(AHero, bIsInStrafeMode);
}

AHero::AHero() {
    this->bEnableAttackFootRoot = false;
    this->AttackFootRootRadius = 40.00f;
    this->MaxDamageFreezeTime = 0.01f;
    this->bRefreshFreezeTime = true;
    this->bReplicateFreeze = true;
    this->HeroVitalAttributes = CreateDefaultSubobject<UHeroVitalAttributes>(TEXT("VitalAttributes"));
    this->InteractiveQueue = CreateDefaultSubobject<UInteractiveQueueComponent>(TEXT("InteractiveQueue"));
    this->PositionPingLifetime = 5.00f;
    this->PlayerController = NULL;
    this->DeathActor = NULL;
    this->SpearTeleportStartAudioEvent = NULL;
    this->SpearTeleportEndAudioEvent = NULL;
    this->PlungeAttackCooldown = 0.70f;
    this->MinPlungeAttackDistance = 200.00f;
    this->CameraShakeCurveLargeFall = NULL;
    this->CameraShakeCurveDeathFall = NULL;
    this->CameraShakeStormWiggle = NULL;
    this->CameraShakeStormWiggleTime = 0.00f;
    this->FxStormIntensity = 0.00f;
    this->FxStormHeavyIntensity = 0.00f;
    this->StatueTeleportFxStart = NULL;
    this->StatueTeleportFxFly = NULL;
    this->StatueTeleportFxEnd = NULL;
    this->DrowningDeathTime = 6.00f;
    this->IsAiming = false;
    this->IsAimRotationCorrect = false;
    this->CameraLateralInput = 0.00f;
    this->CameraLongitudinalInput = 0.00f;
    this->LockOnPitchAdjustment = 0.00f;
    this->SpearThrowPitchOffset = 0.50f;
    this->MinLockOnPitchAdjustment = 0.00f;
    this->MaxLockOnPitchAdjustment = 0.00f;
    this->SmoothLockOnPitchTime = 0.10f;
    this->ReplicatedLockOnPitchAdjustment = 0.00f;
    this->bIsInStrafeMode = false;
    this->DefaultCameraLagHorizontal = 4.00f;
    this->DefaultCameraLagForward = 6.00f;
    this->LockOnCameraLagHorizontal = 7.00f;
    this->LockOnCameraLagForward = 7.00f;
    this->RotationSpeed = 10.00f;
    this->HeroCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("HeroCamera"));
    this->SpringArm = CreateDefaultSubobject<UAshenSpringArmComponent>(TEXT("SpringArm"));
    this->OrigCamPos = CreateDefaultSubobject<USceneComponent>(TEXT("OrigCamPos"));
    this->AimCamPos = CreateDefaultSubobject<USceneComponent>(TEXT("AimCamPos"));
    this->FeedbackComp = CreateDefaultSubobject<UHeroFeedbackComponent>(TEXT("HeroFeedbackComponent"));
    this->TextRender = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRender"));
    this->AshAmbientParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("AshAmbientParticle"));
    this->AshAmbientParticleCamera = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("AshAmbientParticleCamera"));
    this->NpcAcquisitionParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("NpcAcquisitionParticle"));
    this->IndicatorComponent = NULL;
    this->MaskAttachmentComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MaskAttachmentComponent"));
    this->BackAttachmentComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BackAttachmentComponent"));
    this->HardcoreModeComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HardcoreModeComponent"));
    this->BlockCostPerSecond = 0.00f;
    this->RollCost = 0.00f;
    this->JumpCost = 0.00f;
    this->DodgeCost = 0.00f;
    this->MinStaminaCost = 0.00f;
    this->SprintCost = 0.00f;
    this->PerfectComboScalar = 0.80f;
    this->RollTimeWindowAfterStartOfDodge = 0.00f;
    this->RollTimeWindowAfterStartOfRoll = 0.00f;
    this->SprintDamageMultiplier = 1.20f;
    this->SprintPoiseDamageMultiplier = 1.20f;
    this->timeSinceLastEvade = 0.00f;
    this->timeSinceLastDodge = 0.00f;
    this->CameraShakeSpeed = 0.00f;
    this->AutoRotateRate = 0.00f;
    this->AngleBias = 0.00f;
    this->bEnableHandWeaponIK = false;
    this->bEnableCameraBlockFade = true;
    this->CameraBlockFadeRate = 3.00f;
    this->CameraBlockBehindRadius = 300.00f;
    this->CameraBlockFrontRadius = 180.00f;
    this->CameraUnblockBehindRadius = 310.00f;
    this->CameraUnblockFrontRadius = 200.00f;
    this->LowerAimLimit = 0.00f;
    this->UpperAimLimit = 0.00f;
    this->AimingLerpSpeed = 0.00f;
    this->CamInLerpTimer = 0.00f;
    this->CamOutLerpTimer = 0.00f;
    this->CamOutLerpSpeed = 0.00f;
    this->CamInLerpSpeed = 0.00f;
    this->BoomArmStartLength = 0.00f;
    this->BoomArmEndLength = 0.00f;
    this->LowerAimOffsetValue = 0.00f;
    this->UpperAimOffsetValue = 0.00f;
    this->Emote = NULL;
    this->bEndLevel = false;
    this->CurrencyEffect = NULL;
    this->CurrencyClass = NULL;
    this->bIsEngagedInDialogue = false;
    this->MaxDistanceForDialogueToEnd = 200.00f;
    this->RightFistCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("RightFistCollision"));
    this->RightFistTrailAttachment = CreateDefaultSubobject<USceneComponent>(TEXT("RightFistTrailAttachment"));
    this->LeftFistCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("LeftFistCollision"));
    this->LeftFistTrailAttachment = CreateDefaultSubobject<USceneComponent>(TEXT("LeftFistTrailAttachment"));
    this->CustomInteraction = NULL;
    this->ClamberInteraction = NULL;
    this->WaterRefillInteraction = NULL;
    this->RescueInteraction = NULL;
    this->ShareWaterInteraction = NULL;
    this->CoopClamberOfferInteraction = NULL;
    this->CoopClamberAcceptInteraction = NULL;
    this->Alert_DownedInteraction = NULL;
    this->Alert_ClimbWaiting = NULL;
    this->Alert_DoorWaiting = NULL;
    this->Alert_ClimbRequest = NULL;
    this->Alert_DoorRequest = NULL;
    this->Alert_WaterOffer = NULL;
    this->CoopClamberAcceptanceOffset = 100.00f;
    this->GiveWaterRange = 50.00f;
    this->GiveWaterOffset = 75.00f;
    this->GiveWaterMaxAngleRadians = 0.40f;
    this->bOfferWaterTimeoutEnabled = true;
    this->OfferWaterTimeoutSecs = 5.00f;
    this->RescueInteractionRange = 50.00f;
    this->RescueInteractionOffset = 75.00f;
    this->RescueInteractionMaxAngleRadians = 0.40f;
    this->RescueHoldTime = 1.00f;
    this->OfferClamberAcceptanceRange = 70.00f;
    this->OfferClamberMaxAngleRadians = 0.62f;
    this->bOfferClamberTimeoutEnabled = true;
    this->OfferClamberTimeoutSecs = 12.00f;
    this->ClimbingNumVerticalTraces = 3;
    this->ClimbingVerticalTraceGap = 10.00f;
    this->ClimbingMaxFaceNormalAngle = -0.60f;
    this->bShowClamberDebug = false;
    this->ClamberHeightMin = 20.00f;
    this->ClamberHeightMax = 255.00f;
    this->UnintendedClamberHeight = 0.00f;
    this->CoopClamberHeightMin = 300.00f;
    this->CoopClamberHeightMax = 320.00f;
    this->UnintendedCoopClamberHeight = 0.00f;
    this->CoopClamberForwardOffset = 68.00f;
    this->ClamberForwardOffset = 20.00f;
    this->ClamberNumProjectedCapsules = 2;
    this->ClamberHeightFound = false;
    this->CoopClamberHeightFound = false;
    this->ClamberRadius = 200.00f;
    this->ClamberMinDirectionDotProduct = 0.70f;
    this->ClamberStaminaMinCost = 10.00f;
    this->ClamberStaminaMaxCost = 20.00f;
    this->ClamberDisplayMinHeight = 200.00f;
    this->LedgeGrabHeightMin = 50.00f;
    this->LedgeGrabHeightMax = 150.00f;
    this->bShowLedgeGrabDebug = false;
    this->LedgeGrabMinStaminaCost = 10.00f;
    this->LedgeGrabMaxStaminaCost = 20.00f;
    this->LedgeGrabForwardOffset = 50.00f;
    this->LedgeGrabNumProjectedCapsules = 0;
    this->LedgeGrabRequiredDistanceFromGround = 50.00f;
    this->StartingTalismanMajor = NULL;
    this->HeroEffectsComponent = NULL;
    this->EffectorPostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessFx"));
    this->PostProcessEffectorsCollection = NULL;
    this->StaminaWaterInvunDuration = 0.00f;
    this->DefaultWaterBuffEffect = NULL;
    this->DefaultWaterPoolBuffEffect = NULL;
    this->AreaDiscoveryTimeout = 300.00f;
    this->DungeonStyleUI = false;
    this->UsePlayerPostionLock = false;
    this->MapClass = NULL;
    this->IsPlayerInTown = false;
    this->Raiden = NULL;
    this->DefaultLockOnBreakDistance = 0.00f;
    this->DefaultLockOnMinDistance = 0.00f;
    this->bHasCloseHostile = false;
    this->DynamicJumpClamberLinkClass = NULL;
    this->DynamicClamberLinkClass = NULL;
    this->DynamicJumpLinkClass = NULL;
    this->IdleSubmergedHeightThreshold = 0.40f;
    this->DebugLanternClass = NULL;
    this->DebugPlayerToFollow = NULL;
    this->isAutoRunning = false;
    this->EnableExtraCombatNotifies = true;
    this->PostBeginPlayCalled = false;
    this->MaxDistanceToSaveStone = 0.00f;
    this->MeshHair = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HairMesh"));
    this->MeshFacialHair = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("AccessoryMesh"));
    this->DefaultNoArmourMale = NULL;
    this->DefaultNoArmourFemale = NULL;
    this->DefualtAliveMalePhysics = NULL;
    this->DefualtDeadMalePhysics = NULL;
    this->DefualtAliveFemalePhysics = NULL;
    this->DefualtDeadFemalePhysics = NULL;
    this->PendingDiasoraLanding = false;
    this->HairDynamicMaterial = NULL;
    this->FacialHairDynamicMaterial = NULL;
    this->DownedGlobalAudioEvent = NULL;
    this->PartnerDownedGlobalAudioEvent = NULL;
    this->PartnerDeathGlobalAudioEvent = NULL;
    this->RescuedGlobalAudioEvent = NULL;
    this->RescueStartingAudioEvent = NULL;
    this->RescueFailedAudioEvent = NULL;
    this->RescuedAudioEvent = NULL;
    this->WildmanPositionPingSound = NULL;
    this->WildmanQuestPingSound = NULL;
    this->TreasureHunterPositionPingSound = NULL;
    this->TreasureHunterQuestPingSound = NULL;
    this->ScionPositionPingSound = NULL;
    this->ScionQuestPingSound = NULL;
    this->PeglegPositionPingSound = NULL;
    this->PeglegQuestPingSound = NULL;
    this->OutcastPositionPingSound = NULL;
    this->OutcastQuestPingSound = NULL;
    this->HuntressPositionPingSound = NULL;
    this->HuntressQuestPingSound = NULL;
    this->FisherwomanPositionPingSound = NULL;
    this->FisherwomanQuestPingSound = NULL;
    this->PlayerPositionPingSound = NULL;
    this->PlayerQuestPingSound = NULL;
    this->OnStunnedSound = NULL;
    this->OnStunnedAudioMuffleEvent = NULL;
    this->FailedConsumableUseSound = NULL;
    this->CompanionNPCType = ENpcType::Fallback;
    this->CompanionNPCOutfitState = ENpcOutfitState::Default;
    this->TimePerFloorCheck = 0;
    this->CorpsePlacementMaximumSubmergedHeight = 50.00f;
    this->TownQuestLine = NULL;
    this->TownUnlockedQuestState = NULL;
}

