#include "QuestManager.h"
#include "Templates/SubclassOf.h"

class ACreature;
class UQuestState;
class UQuestLine;
class AStoryHumanoid;
class AQuestPoint;
class AAshenBaseGameState;

void UQuestManager::RemoveTrackedItem(UQuestState* OwningTracker, EQuestItem Item) {
}

void UQuestManager::RemoveTrackedCreature(UQuestState* OwningTracker, FGameplayTag CreatureType) {
}

void UQuestManager::ProgressState(UQuestState* QuestState, int32 BranchIndex) {
}

bool UQuestManager::IsQuestLineAtTag(UQuestLine* QuestLine, FQuestStateTag QuestStateTag) const {
    return false;
}

bool UQuestManager::IsQuestLineAtAnyTag_ReturnTag(UQuestLine* QuestLine, const TArray<FQuestStateTag>& QuestStateTags, FQuestStateTag& TagFound) const {
    return false;
}

bool UQuestManager::IsQuestLineAtAnyTag(UQuestLine* QuestLine, const TArray<FQuestStateTag>& QuestStateTags) const {
    return false;
}

bool UQuestManager::IsQuestLineAtAny_StringRef(UQuestLine* QuestLine, const TArray<FSoftClassPath>& QuestStateClasses) const {
    return false;
}

bool UQuestManager::IsQuestLineAtAny(UQuestLine* QuestLine, const TArray<TSubclassOf<UQuestState>>& QuestStateClasses) const {
    return false;
}

bool UQuestManager::IsQuestLineAt_StringRef(UQuestLine* QuestLine, const FSoftClassPath& QuestStateClass) const {
    return false;
}

bool UQuestManager::IsQuestLineAt(UQuestLine* QuestLine, TSubclassOf<UQuestState> QuestStateClass) const {
    return false;
}

bool UQuestManager::IsItemBeingTracked(EQuestItem ItemToCheck, ENpcType SpecificNPC) {
    return false;
}

bool UQuestManager::IsCreatureBeingTracked(ACreature* CreatureToCheck, ENpcType SpecificNPC) {
    return false;
}

bool UQuestManager::IsAnyItemBeingTracked(TArray<EQuestItem> ItemsToCheck, ENpcType SpecificNPC) {
    return false;
}

TArray<TSoftClassPtr<AStoryHumanoid>> UQuestManager::HasNewQuestToGive(UQuestLine* QuestLine) {
    return TArray<TSoftClassPtr<AStoryHumanoid>>();
}

TMap<ENpcType, FQuestZoneArray> UQuestManager::GetQuestZones() {
    return TMap<ENpcType, FQuestZoneArray>();
}

TArray<TSubclassOf<UQuestState>> UQuestManager::GetQuestStates(UQuestLine* QuestLine) const {
    return TArray<TSubclassOf<UQuestState>>();
}

void UQuestManager::GetQuestPoints(TSubclassOf<AQuestPoint> PointClass) {
}

TMap<ENpcType, FQuestPointArray> UQuestManager::GetQuestLocations() {
    return TMap<ENpcType, FQuestPointArray>();
}

AQuestPoint* UQuestManager::GetQuestLocation(FName QuestAreaRowName) {
    return NULL;
}

int32 UQuestManager::GetNumActiveStates(UQuestLine* QuestLine) const {
    return 0;
}

AQuestPoint* UQuestManager::GetMiddleOfQuestSet(TArray<AQuestPoint*> Set) {
    return NULL;
}

AQuestPoint* UQuestManager::GetLargestOfQuestSet(TArray<AQuestPoint*> Set, int32& Index) {
    return NULL;
}

AAshenBaseGameState* UQuestManager::GetGameState() const {
    return NULL;
}

TArray<AQuestPoint*> UQuestManager::GetClosestOfActiveQuestZonesForNPC(ENpcType NPC_Type, FVector Location) {
    return TArray<AQuestPoint*>();
}

TArray<AQuestPoint*> UQuestManager::GetClosestActiveQuestMarkers(int32 MaxLocations, FVector Point, float ExcludeIfCloserThen, float ResetShatterAtDistance) {
    return TArray<AQuestPoint*>();
}

TMap<UQuestLine*, FQuestProgress> UQuestManager::GetAllQuestLineProgress() const {
    return TMap<UQuestLine*, FQuestProgress>();
}

TArray<AQuestPoint*> UQuestManager::GetActiveTownQuests() {
    return TArray<AQuestPoint*>();
}

TArray<FQuestStateTag> UQuestManager::GetActiveTags(UQuestLine* QuestLine) const {
    return TArray<FQuestStateTag>();
}

TArray<FQuestPointArray> UQuestManager::GetActiveQuestZonesForNPC(ENpcType NPC_Type) {
    return TArray<FQuestPointArray>();
}

TArray<AQuestPoint*> UQuestManager::GetActiveQuestLocations() {
    return TArray<AQuestPoint*>();
}

AQuestPoint* UQuestManager::GetActiveQuestLocation(ENpcType NPC_Type) {
    return NULL;
}

TArray<AQuestPoint*> UQuestManager::GetActiveNPCQuestLocations(ENpcType NPC_Type) {
    return TArray<AQuestPoint*>();
}

TArray<AQuestPoint*> UQuestManager::GetActiveMarkerLocations(EUIMapMarkerType Type) {
    return TArray<AQuestPoint*>();
}

void UQuestManager::AddTrackedItems(UQuestState* OwningTracker, TArray<EQuestItem> Items) {
}

void UQuestManager::AddTrackedCreatures(UQuestState* OwningTracker, TArray<FGameplayTag> CreatureTypes) {
}

UQuestManager::UQuestManager() {
    this->GameState = NULL;
}

