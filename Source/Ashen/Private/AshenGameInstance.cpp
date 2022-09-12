#include "AshenGameInstance.h"
#include "Templates/SubclassOf.h"

class AWorldTravelPoint;
class UAshenStateSave;
class UUISystemNotification;
class UQuestLine;
class UQuestState;
class UAshenProfileSave;
class UWorld;

void UAshenGameInstance::UpdateSaves() {
}

void UAshenGameInstance::UpdateAchievementProgress(const FString& AchievementId) {
}

bool UAshenGameInstance::UIOptionEnabled(EUIOnOffSetting Setting, bool IgnoreAllHidden) {
    return false;
}

bool UAshenGameInstance::TryTravelToNonActiveTravelPoint(ETravelPointName PointName) {
    return false;
}

AWorldTravelPoint* UAshenGameInstance::TryGetTravelPoint(ETravelPointName PointName) {
    return NULL;
}

void UAshenGameInstance::TravelToPoint(FTravelPointData TravelPointData, bool TravelingViaDiasora) {
}

void UAshenGameInstance::SetUIOptionEnabled(EUIOnOffSetting Setting, bool Enabled) {
}

void UAshenGameInstance::SetNextLoadScreens(TEnumAsByte<LoadingScreenID> NextType) {
}

void UAshenGameInstance::SetLoadedStateSave(UAshenStateSave* InAshenStateSave) {
}

void UAshenGameInstance::SetInvertedControls(bool _invert) {
}

void UAshenGameInstance::SetHZBSettingsEnabbled() {
}

void UAshenGameInstance::SetHZBSettingsDissabled() {
}

void UAshenGameInstance::SetFPSCap(EFPSRate FPSCap, bool ApplyNow) {
}

void UAshenGameInstance::SetCulture(const FString& NewCulture) {
}

void UAshenGameInstance::ResetSteamAchievements() {
}

void UAshenGameInstance::ResetSaveData() {
}

void UAshenGameInstance::QueueSystemNotification(FText Text, float LifeTime, TSubclassOf<UUISystemNotification> ClassOverride) {
}

void UAshenGameInstance::LockInGraphicsSettings(bool ResetToLastVales) {
}

UAshenStateSave* UAshenGameInstance::LoadTemporaryStateSave(const FString& SaveName) {
    return NULL;
}

bool UAshenGameInstance::LoadDebugSave(const FString& SaveName) {
    return false;
}

bool UAshenGameInstance::LastTravelViaDiasora() {
    return false;
}

bool UAshenGameInstance::IsUseingSteam() {
    return false;
}

bool UAshenGameInstance::IsSpawnTravelPointGuidValid() {
    return false;
}

bool UAshenGameInstance::IsSaveDataInProgress() const {
    return false;
}

bool UAshenGameInstance::IsQuestLineAt(UQuestLine* QuestLine, TSubclassOf<UQuestState> QuestStateClass) const {
    return false;
}

bool UAshenGameInstance::IsPlatformXboxOne() const {
    return false;
}

bool UAshenGameInstance::IsPlatformConsole() const {
    return false;
}

bool UAshenGameInstance::IsLocalPlayerMale() {
    return false;
}

bool UAshenGameInstance::IsCurrentUserControllerConnected() const {
    return false;
}

bool UAshenGameInstance::IsControllerPaired() {
    return false;
}

bool UAshenGameInstance::IsControllerEngaged() {
    return false;
}

bool UAshenGameInstance::IsConnectedToOnlineServer() const {
    return false;
}

bool UAshenGameInstance::HasSave(int32 SlotNumber) const {
    return false;
}

FString UAshenGameInstance::GetSaveSlotName(int32 SlotNum) {
    return TEXT("");
}

FString UAshenGameInstance::GetRandomDeathMessage() {
    return TEXT("");
}

FString UAshenGameInstance::GetPlayerNickname() const {
    return TEXT("");
}

EPlatformSpecific UAshenGameInstance::GetPlatform() const {
    return EPlatformSpecific::Windows;
}

int32 UAshenGameInstance::GetMaxSaveSlots() const {
    return 0;
}

bool UAshenGameInstance::GetInvertedControls() const {
    return false;
}

int32 UAshenGameInstance::GetEngagedControllerIndex() const {
    return 0;
}

TArray<FString> UAshenGameInstance::GetDebugSaveNames() {
    return TArray<FString>();
}

EInputContext UAshenGameInstance::GetCurrentInputContext() const {
    return EInputContext::NotYetSet;
}

UAshenStateSave* UAshenGameInstance::GetAshenStateSave() {
    return NULL;
}

UAshenProfileSave* UAshenGameInstance::GetAshenProfileSave() {
    return NULL;
}

void UAshenGameInstance::GetandClearLastDeathMessage(FString& _DeathMessage) {
}

TArray<AWorldTravelPoint*> UAshenGameInstance::GetAllLoadedTravelPoints() {
    return TArray<AWorldTravelPoint*>();
}

EActiveUserState UAshenGameInstance::GetActiveUserState() const {
    return EActiveUserState::ControllerNotEngaged;
}

void UAshenGameInstance::Gather_QuestDialogue() {
}

void UAshenGameInstance::ExitGameOnXbox() const {
}

void UAshenGameInstance::EndLoadingScreen(UWorld* World) {
}

bool UAshenGameInstance::DeleteSaveSlotData(int32 SaveSlot) {
    return false;
}

void UAshenGameInstance::DeathLoadLogic() {
}

void UAshenGameInstance::CreateSlotSave(int32 SlotSaveNum) {
}

void UAshenGameInstance::CreateNamedDebugSave(const FString& SaveName) {
}

void UAshenGameInstance::CreateDebugSave() {
}

bool UAshenGameInstance::ConsumeShowSignedInChangeErrorFlag() {
    return false;
}

void UAshenGameInstance::ClearLastTravelViaDiasora() {
}

bool UAshenGameInstance::CanUserPlayOnline() const {
    return false;
}

bool UAshenGameInstance::CanPlayNightstormDLC() const {
    return false;
}

void UAshenGameInstance::BeginLoadingScreen(const FString& String) {
}

void UAshenGameInstance::ApplyGraphicsSettings(bool ResetSavedSettingsToLockedInValues) {
}

UAshenGameInstance::UAshenGameInstance() {
    this->LoadingSkipActionName = TEXT("UI_Cancel");
    this->UIFakePlatform = EPlatformSpecific::Windows;
    this->UIFakeThePlatform = false;
    this->UIFakeInShipping = false;
    this->UIFakeSteam = false;
    this->SystemNotificationWidgetClass = NULL;
    this->SystemNotificationWidgetZOrder = 10;
    this->ControllerDisconnectWidgetClass = NULL;
    this->ControllerDisconnectWidgetZOrder = 10000;
    this->ControllerDisconnectWidget = NULL;
    this->ContinueActionName = TEXT("UI_Confirm");
    this->SaveInvalidatedUINeeded = false;
    this->CaveFallTitleType = false;
    this->AreaDataTable = NULL;
    this->GraphicsDataTable = NULL;
    this->MaxSaveSlots = 5;
    this->BackupSaveFrequency = 320.00f;
    this->AshenProfileSave = NULL;
    this->AshenStateSave = NULL;
    this->FastTravelAudioEvent = NULL;
    this->AppDeactivateAudioEvent = NULL;
    this->AppReactivateAudioEvent = NULL;
    this->bInvertedControls = false;
    this->TutorialQuestLine = NULL;
    this->TutorialQuestCompleteClass = NULL;
    this->BuildName = TEXT("Steam-Shipping-001");
    this->SourceVersion = TEXT("HEAD");
    this->ContentVersion = TEXT("HEAD");
    this->MatchmakingVersion = TEXT("Ashen.Release.1.0.0");
    this->SaveVersion = TEXT("1.0.0");
    this->bCheckLocalDLC = true;
}

