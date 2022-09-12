#include "UICompass.h"

class UImage;
class AQuestPoint;
class AQuestPathfindingPoint;
class UAshenEventData;
class UCanvasPanel;

void UUICompass::Update(float InDeltaTime) {
}

void UUICompass::SetupActiveCompassPoints() {
}

void UUICompass::RemoveQuestPingMarkers(TArray<AQuestPoint*> PointsToKeep) {
}

void UUICompass::RemoveNorthIcon() {
}

void UUICompass::RemoveDownedIcon() {
}

void UUICompass::RemoveCorpseLootIcon() {
}



void UUICompass::OnTownEntryEvent(UAshenEventData* EventData) {
}

void UUICompass::OnQuestStateChanged(UAshenEventData* EventData) {
}

void UUICompass::OnBuddyPingEvent(UAshenEventData* EventData) {
}

void UUICompass::OnBuddyLostEvent(UAshenEventData* EventData) {
}

void UUICompass::OnBuddyGainedEvent(UAshenEventData* EventData) {
}

void UUICompass::OnActiveNPCchanged(UAshenEventData* EventData) {
}

UCanvasPanel* UUICompass::GetQuestPingSpace() {
    return NULL;
}

UImage* UUICompass::GetCompassRight() {
    return NULL;
}

UImage* UUICompass::GetCompassLeft() {
    return NULL;
}

UImage* UUICompass::GetCompassGlowRef() {
    return NULL;
}

void UUICompass::AddPlayerIcon(ECompassPointType Type) {
}

void UUICompass::AddNorthIcon() {
}

void UUICompass::AddCorpseLootIcon() {
}

void UUICompass::AddCompassPoint_Implementation(AQuestPoint* Point, AQuestPathfindingPoint* RePathPoint) {
}

UUICompass::UUICompass() {
    this->RepathExculsionDistance = 7000.00f;
    this->RepathRefreshTime = 2.00f;
    this->RepathRefreshTimer = 0.00f;
    this->InZone = false;
    this->UI_CompassQuestPointClass = NULL;
    this->UI_CompassPlayerPointClass = NULL;
    this->AreaEntryFadeSpeed = 2.00f;
    this->UniversalCompassPointAlpha = 1.00f;
    this->InDungeonAlphaFade = 1.00f;
    this->QuestPingSpaceRef = NULL;
    this->CompassGlowRef = NULL;
    this->CompassLeft = NULL;
    this->CompassRight = NULL;
    this->AddPlayerWhenVisible = false;
    this->PlayerPingPoint = NULL;
    this->NorthPingPoint = NULL;
    this->CorpseLootPingPoint = NULL;
}

