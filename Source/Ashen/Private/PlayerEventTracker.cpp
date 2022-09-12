#include "PlayerEventTracker.h"

class AAction;
class UItemEquipment;
class UItemBase;
class UAshenEventData;
class ACreature;
class UItemTable;

void UPlayerEventTracker::UpdateSprintTimers(float DeltaTime) {
}

void UPlayerEventTracker::UpdateLockon() {
}

bool UPlayerEventTracker::UnsavedEventType(ETrackedPlayerEvent Event) {
    return false;
}

void UPlayerEventTracker::TrackState(ETrackedPlayerState StateType, bool StateDesired) {
}

void UPlayerEventTracker::TrackQuerySuccesses(FName QueryName, int32 CountRequiredForBroadcast) {
}

void UPlayerEventTracker::TrackEvent(ETrackedPlayerEvent EventType, int32 CountRequiredForBroadcast, bool ResetsIncluded) {
}

FName UPlayerEventTracker::TrackAQuery(FPlayerEventsAndStateQuery QueryType) {
    return NAME_None;
}

void UPlayerEventTracker::StopTrackingAQuery(FName QueryName) {
}

void UPlayerEventTracker::SetWeaponDrawnStates() {
}

void UPlayerEventTracker::SetupInitualStates() {
}

void UPlayerEventTracker::SetPlayerState(ETrackedPlayerState StateType, bool Value) {
}

void UPlayerEventTracker::SetCheckedHealthValue(float Value) {
}

void UPlayerEventTracker::SaveStoredValue(ETrackedPlayerEvent Event, int32 Count) {
}

void UPlayerEventTracker::SaveQuerySuccesses(FName Query, int32 Amount) {
}

void UPlayerEventTracker::SaveLastStoredValues() {
}

void UPlayerEventTracker::ResetEventOccurances(ETrackedPlayerEvent EventType) {
}

void UPlayerEventTracker::ResetAllCounters() {
}

int32 UPlayerEventTracker::PlayerEventOccurances(ETrackedPlayerEvent EventType, bool ResetsIncluded) {
    return 0;
}

void UPlayerEventTracker::OnSpearAim() {
}

void UPlayerEventTracker::OnQuestStateChanged(UAshenEventData* EventData) {
}

void UPlayerEventTracker::OnPlayerUseBeltItem(UItemBase* Item) {
}

void UPlayerEventTracker::OnPlayerSwitchBeltItem() {
}

void UPlayerEventTracker::OnPlayerSprint() {
}

void UPlayerEventTracker::OnPlayerEquipRight(UItemEquipment* Item, bool UserDriven) {
}

void UPlayerEventTracker::OnPlayerEquipLeft(UItemEquipment* Item, bool UserDriven) {
}

void UPlayerEventTracker::OnPlayerDodge() {
}

void UPlayerEventTracker::OnPlayerChangeTarget(ACreature* NewTarget) {
}

void UPlayerEventTracker::OnPlayerActionChange(const AAction* Action, EActionState Current, EActionState Previous) {
}

void UPlayerEventTracker::OnMultiplayerFinialised(UAshenEventData* AshenEventData) {
}

void UPlayerEventTracker::OnMultiplayerDisconected(UAshenEventData* AshenEventData) {
}

void UPlayerEventTracker::OnMultiplayerAISpawn(UAshenEventData* AshenEventData) {
}

void UPlayerEventTracker::OnMultiplayerAIDeSpawn(UAshenEventData* AshenEventData) {
}

void UPlayerEventTracker::OnLightingChanged(const FRaidenData& NewData) {
}

void UPlayerEventTracker::OnLightAttack() {
}

void UPlayerEventTracker::OnItemRemoved(UItemTable* Source, UItemBase* Item) {
}

void UPlayerEventTracker::OnItemChanged(UItemTable* Source, UItemBase* Item) {
}

void UPlayerEventTracker::OnItemAdded(UItemTable* Source, UItemBase* Item) {
}

void UPlayerEventTracker::OnHeroEquipmentStateChange(UItemEquipment* Item) {
}

void UPlayerEventTracker::OnHeavyAttack() {
}

void UPlayerEventTracker::OnDamageTaken(const FAshenDamage& DamageRef) {
}

void UPlayerEventTracker::OnCreatureDeath(UAshenEventData* AshenEventData) {
}

bool UPlayerEventTracker::IsPlayerAtState(ETrackedPlayerState StateType) {
    return false;
}

TMap<FName, int32> UPlayerEventTracker::GetTrackedQueriesWCounts() {
    return TMap<FName, int32>();
}

TMap<ETrackedPlayerState, bool> UPlayerEventTracker::GetStatesWValues() {
    return TMap<ETrackedPlayerState, bool>();
}

int32 UPlayerEventTracker::GetQuerySuccesses(FName Query) {
    return 0;
}

TMap<ETrackedPlayerEvent, int32> UPlayerEventTracker::GetEventsWCounts(bool ResetsIncluded) {
    return TMap<ETrackedPlayerEvent, int32>();
}

void UPlayerEventTracker::ClearQuerySuccesses() {
}

void UPlayerEventTracker::ClearQuerySuccessCategory(FName Query) {
}

bool UPlayerEventTracker::CheckTrackedQueryValidity(FName QueryName) {
    return false;
}

bool UPlayerEventTracker::CheckQueryValidity(FPlayerEventsAndStateQuery Query) {
    return false;
}

bool UPlayerEventTracker::CapEventCountAt1(ETrackedPlayerEvent Event) {
    return false;
}

void UPlayerEventTracker::BumpQuerySuccesses(FName Query, bool SavedType) {
}

void UPlayerEventTracker::BumpPlayerEventOccurance(ETrackedPlayerEvent EventType) {
}

UPlayerEventTracker::UPlayerEventTracker() {
    this->GameState = NULL;
    this->LocalHero = NULL;
    this->SaveData = NULL;
}

