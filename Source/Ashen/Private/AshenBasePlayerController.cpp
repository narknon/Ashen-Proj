#include "AshenBasePlayerController.h"

class AAshenPlayerCameraManager;

bool AAshenBasePlayerController::XboxXRDiscardInput(FKey InputKey) const {
    return false;
}

void AAshenBasePlayerController::UpdateInputEventImages() {
}

void AAshenBasePlayerController::UpdateCameraValueForMouseLockon(float DeltaSeconds) {
}

void AAshenBasePlayerController::UnBindInputKeyCategory(FName RebindEventName) {
}

void AAshenBasePlayerController::UnBindInputAxisCategory(FName RebindEventName) {
}

void AAshenBasePlayerController::UnBindAllKeyCategorys() {
}

void AAshenBasePlayerController::UnBindAllInputAxisCategorys() {
}

void AAshenBasePlayerController::SummonPlayerHUD(bool bSetIntializedLocally) {
}

bool AAshenBasePlayerController::ShouldUseMouseScrollNavigation() const {
    return false;
}

void AAshenBasePlayerController::SetupInputs(bool KeyboardLayoutChange) {
}

void AAshenBasePlayerController::SetThumbsticksSwitched(bool Switched, bool UseSavedValue) {
}

void AAshenBasePlayerController::SetShouldUseMouseScrollNavigation(bool Use) {
}

void AAshenBasePlayerController::SetMousePosition(float LocationX, float LocationY) {
}

void AAshenBasePlayerController::SetMenuButtonSwitched(bool Switched, bool UseSavedValue) {
}

void AAshenBasePlayerController::SetLastPressedKey(FKey Key) {
}

void AAshenBasePlayerController::SetInputRebindingPending(bool Value) {
}

void AAshenBasePlayerController::SaveBoundInputMaps(bool Reset) const {
}

void AAshenBasePlayerController::ResetToOriginalInputMappings() {
}

void AAshenBasePlayerController::ResetOrderedInputMappings() {
}

void AAshenBasePlayerController::ResetCategoryToOriginalInputMappings(FName RebindEventName) {
}

void AAshenBasePlayerController::RebuildMappings(bool NavigationOnly) {
}


bool AAshenBasePlayerController::IsOnConsole() const {
    return false;
}

bool AAshenBasePlayerController::IsApplicationInFocus() const {
    return false;
}

EInputUIEventTypes AAshenBasePlayerController::GetUIEventFromInputEvent(EInputEventNames EventName) const {
    return EInputUIEventTypes::None;
}

int32 AAshenBasePlayerController::GetSavedControllerInputIndex() {
    return 0;
}

TArray<FInputActionKeyMapping> AAshenBasePlayerController::GetOriginalKeyMappings(FName RebindEventName) const {
    return TArray<FInputActionKeyMapping>();
}

TArray<FInputAxisKeyMapping> AAshenBasePlayerController::GetOriginalAxisMappings(FName RebindEventName) const {
    return TArray<FInputAxisKeyMapping>();
}

FKey AAshenBasePlayerController::GetLastPressedKey() const {
    return FKey{};
}

EInputContext AAshenBasePlayerController::GetLastPressedInputType() const {
    return EInputContext::NotYetSet;
}

TArray<FInputActionKeyMapping> AAshenBasePlayerController::GetKeysMappedToAction(FName ActionName) const {
    return TArray<FInputActionKeyMapping>();
}

FText AAshenBasePlayerController::GetKeyName(FInputKeyData KeyRow) {
    return FText::GetEmpty();
}

FInputBindingDataSet AAshenBasePlayerController::GetInputPreset(bool& DefualtValue) {
    return FInputBindingDataSet{};
}

TArray<FKey> AAshenBasePlayerController::GetChangedActionMappingKeys() {
    return TArray<FKey>();
}

FInputKeyImage AAshenBasePlayerController::GetButtonImageForKeyBinding(FInputActionKeyMapping KeyBinding) {
    return FInputKeyImage{};
}

FInputKeyImage AAshenBasePlayerController::GetButtonImageForEvent(EInputEventNames Event, FKey PrioritiseThisKey) const {
    return FInputKeyImage{};
}

FInputKeyImage AAshenBasePlayerController::GetButtonImageForAxisBinding(FInputAxisKeyMapping AxisBinding) {
    return FInputKeyImage{};
}

TArray<FInputActionKeyMapping> AAshenBasePlayerController::GetBoundKeyMap(bool GetOrderedSet) const {
    return TArray<FInputActionKeyMapping>();
}

TArray<FInputAxisKeyMapping> AAshenBasePlayerController::GetBoundAxisMap() const {
    return TArray<FInputAxisKeyMapping>();
}

TArray<FRebindingError> AAshenBasePlayerController::GetBindingIssues(TArray<FInputActionKeyMapping> Keys, TArray<FInputAxisKeyMapping> Axies, bool GamepadType) {
    return TArray<FRebindingError>();
}

AAshenPlayerCameraManager* AAshenBasePlayerController::GetAshenPlayerCameraManager() const {
    return NULL;
}

void AAshenBasePlayerController::GetAndSetMappingsFromDefaults() {
}

void AAshenBasePlayerController::DisplaySystemMessage(FText Message, float DispTime, bool AlternateStyle, bool HasColourOverride, FLinearColor ColourOverride, EUIWidgetUnlockFX LockReleaseFX) {
}

bool AAshenBasePlayerController::DiscardInput(FKey InputKey) const {
    return false;
}

bool AAshenBasePlayerController::DiscardAxisInput() const {
    return false;
}

bool AAshenBasePlayerController::CurserShouldGiveUIFocus() {
    return false;
}

void AAshenBasePlayerController::BindInputKey(FInputActionKeyMapping EventKey) {
}

void AAshenBasePlayerController::BindInputAxis(FInputAxisKeyMapping EventKey) {
}

AAshenBasePlayerController::AAshenBasePlayerController() {
    this->PredefinedInputSet = 0;
    this->DefualtFOV = 80.00f;
    this->CharCreatorFOV = 80.00f;
    this->MainMenuFOV = 80.00f;
    this->bInvertControllerHorizontalAxis = false;
    this->bInvertControllerVerticalAxis = false;
    this->bInvertMouseVerticalAxis = false;
    this->bInverteMouseHorizontalAxis = false;
    this->MouseSensitivity = 0.00f;
    this->ControllerSensitivitiy = 0.00f;
    this->SpearAimSensitivitiy = 0.00f;
    this->AllowMouseTargetSwitching = false;
    this->DoubleTapDodgingEnabled = false;
    this->InputRebindingPending = false;
    this->CinematicSkipButtonNeeded = false;
    this->ThumbsticksFlipped = false;
    this->MenusFlipped = false;
    this->BlockingMenusForTime = 0.00f;
    this->LastPressedInputType = EInputContext::NotYetSet;
    this->TrueLastPressedInputType = EInputContext::NotYetSet;
    this->ShouldUseUIMouseScrollNavigation = false;
    this->SystemMessageWidget = NULL;
    this->PlayerHUDClass = NULL;
    this->LockonDeadzoneSize = 50.00f;
    this->LockonDeadzoneRecenterRate = 50.00f;
    this->GameMode = NULL;
    this->AshenGameMode = NULL;
    this->BaseState = NULL;
    this->AshenGameInstance = NULL;
    this->AshenProfileSave = NULL;
    this->AshenHUD = NULL;
    this->PlayerHUD = NULL;
}

