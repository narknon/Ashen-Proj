#include "AshenPlayerController.h"
#include "Templates/SubclassOf.h"

class ACreature;
class UForceFeedbackEffect;
class UCurveVector;
class UItemBase;

void AAshenPlayerController::UpdateDoublePressInputs(float DeltaTime) {
}

void AAshenPlayerController::UI_DisplayTravelMap(const FKey Key) {
}

void AAshenPlayerController::UI_DisplayOptions(const FKey Key) {
}




void AAshenPlayerController::ShowStoredBossDefeatedText() {
}

void AAshenPlayerController::ShowQuestStartedNotification(FText QuestName) {
}

void AAshenPlayerController::ShowQuestCompleteNotification(FText QuestName) {
}

void AAshenPlayerController::ShowBossDefeatedText(float DelayTime) {
}

void AAshenPlayerController::ShowBossBar(ACreature* Boss) {
}

void AAshenPlayerController::SetupDoublePressArrays() {
}

void AAshenPlayerController::SetSoftLockOnEnabled(bool bEnabled) {
}


void AAshenPlayerController::SendFeedbackImpulseRanged(EFeedbackInput Input, FVector SenderLocation, float DistanceThreshold) {
}

void AAshenPlayerController::SendFeedbackImpulse(EFeedbackInput Input) {
}

void AAshenPlayerController::RefreshInventoryUI() {
}

void AAshenPlayerController::PopInteractive() {
}


void AAshenPlayerController::OnPlayerDeath() {
}

bool AAshenPlayerController::IsSoftLockOnEnabled() const {
    return false;
}

bool AAshenPlayerController::IsCreatureAllowedInput() {
    return false;
}

FText AAshenPlayerController::GetCurrentBossDisplayName() {
    return FText::GetEmpty();
}

void AAshenPlayerController::FeedbackShakePlayerCamera(UCurveVector* ShakeVector) {
}

bool AAshenPlayerController::DoublePressMade(bool FowardDir, float AxisValue) {
    return false;
}




void AAshenPlayerController::ClientLog(const FString& Message) {
}

void AAshenPlayerController::ApplyForceFeedbackFromAsset(UForceFeedbackEffect* Effect) {
}

void AAshenPlayerController::AddUiQuestReward(ERewardType RewardType, int32 RewardAmount, UItemBase* ItemReward, TSubclassOf<UItemBase> CraftUnlockClass) {
}

AAshenPlayerController::AAshenPlayerController() {
    this->PlayerHudUi = NULL;
    this->QuestRewardQueue = NULL;
    this->SoftLockOnMaxTargetDistance = 1200.00f;
    this->SoftLockOnMaxStrafeDistance = 800.00f;
    this->SoftLockOnStrafeRotationSpeed = 10.00f;
    this->SoftLockOnInterpSpeed = 0.50f;
    this->SoftLockOnMaxScreenPercentage = 0.25f;
    this->SoftLockOnIntervalTime = 1.00f;
    this->bSoftLockOnEnabled = true;
    this->AdventureCamInterpSpeed = 1.00f;
    this->AdventureCamForwardDeadZoneAngle = 20.00f;
    this->AdventureCamBackwardDeadZoneAngle = 45.00f;
    this->AdventureCamRunTimeThreshold = 10.00f;
    this->AdventureCamZoomSpeed = 3.00f;
    this->AdventureCamTargetArmLength = 500.00f;
    this->bEnableAdventureCamZoom = true;
    this->bEnableSprintAdventureCam = true;
    this->bEnableRunAdventureCam = true;
    this->UICancelHappenedThisFrame = false;
    this->BaseTurnRate = 0.00f;
    this->BaseLookUpRate = 0.00f;
    this->InteractiveMessageWidget = NULL;
    this->BossBar = NULL;
    this->InteractiveQueueReference = NULL;
    this->bTitleCardVisible = false;
    this->bDisableForceFeedback = false;
    this->InventoryClass = NULL;
    this->InteractMenuClass = NULL;
    this->BossBarClass = NULL;
    this->OptionsMenuClass = NULL;
    this->TransitionInClass = NULL;
    this->DeathCardClass = NULL;
    this->EmoteRadialMenuClass = NULL;
    this->MinimumCameraShakeEffectSize = 2.00f;
    this->FeedbackCameraShakeAmount = 0.00f;
    this->LockOnBreakDistance = 0.00f;
    this->MinLockOnDistance = 0.00f;
    this->LockOnCameraDistanceBias = 0.10f;
    this->LockOnCatchDistance = 0.00f;
    this->LockOnMaximumFacingAngle = 0.00f;
    this->LockOnCameraZOffset = 0.00f;
    this->LockOnCameraSpeed = 0.00f;
    this->LockOnCameraRotationSpeed = 10.00f;
    this->MinLockOnCameraPitchClamp = 20.00f;
    this->MaxLockOnCameraPitchClamp = 180.00f;
    this->MinLockOnCameraPitchDistance = 200.00f;
    this->MaxLockOnCameraPitchDistance = 1500.00f;
    this->LockOnChangeTargetInputThreshold = 0.00f;
    this->LockOnChangeTargetDeadzoneThreshold_Keyboard = 0.90f;
    this->bIsLockedOn = false;
    this->JumpDelay = 0.00f;
    this->RollDelay = 0.25f;
    this->SprintDrainDelay = 0.25f;
    this->EmoteDelay = 0.25f;
    this->MaxEmoteCharges = 5;
    this->EmoteRechargeRate = 0.10f;
    this->EmoteWaveExpirationTime = 60.00f;
    this->CinematicSkippingTimeThreshold = 0.00f;
    this->ControlDirectionAverageTime = 0.20f;
    this->KeyboardMovementFlipAccetableLimit = 0.70f;
    this->CamYawInput = 0.00f;
    this->CamPitchInput = 0.00f;
    this->bBlockingPressed = false;
    this->QueuedInputBufferTime = 0.60f;
    this->ControlledHero = NULL;
    this->GameState = NULL;
    this->IdleTimeSitDownThreshold = 40.00f;
}

