#include "UIMapAreasWidget.h"

class UCanvasPanel;
class UPaperSprite;
class UUIMapIcon;

void UUIMapAreasWidget::UpdateTextAlphas(float InDeltaTime) {
}

void UUIMapAreasWidget::UpdateQuestZones(ENpcType ActiveNPC, ENpcType FocusedNPC) {
}

void UUIMapAreasWidget::UpdateMapCamera(float DeltaTime) {
}

void UUIMapAreasWidget::UpdateJuice(bool UpIndex) {
}

void UUIMapAreasWidget::UpdateInactiveZonesMarkers() {
}

void UUIMapAreasWidget::UpdateInActiveQuestZones(TMap<ENpcType, FQuestZoneArray> NewInactiveZones) {
}

void UUIMapAreasWidget::UpdateFocusedZonesMaterials(bool BrushChangeover) {
}

void UUIMapAreasWidget::UpdateFocusedQuestZones(ENpcType FocusedNPC, FQuestZoneArray Array) {
}

void UUIMapAreasWidget::UpdateActiveZonesMaterials(bool BrushChangeover) {
}

void UUIMapAreasWidget::UpdateActiveZonesMarkers() {
}

void UUIMapAreasWidget::UpdateActiveQuestZones(ENpcType ActiveNPC, FQuestZoneArray Array) {
}

void UUIMapAreasWidget::TickQuestZones(float DeltaTime) {
}

TArray<FTravelPointData> UUIMapAreasWidget::SortPointsAroundMapCenterRadially(TArray<FTravelPointData> Points, FVector2D DeltaOffset) {
    return TArray<FTravelPointData>();
}

bool UUIMapAreasWidget::ShouldUsePlayerPositionLock(FVector& LocationLock) {
    return false;
}

bool UUIMapAreasWidget::ShouldUseDungeonStyleMap() {
    return false;
}

void UUIMapAreasWidget::SetNextZoneFocused(FQuestZoneArray Points) {
}

void UUIMapAreasWidget::SetNextZoneActives(FQuestZoneArray Points) {
}

void UUIMapAreasWidget::SetMapZoomed(bool Zoomed) {
}

void UUIMapAreasWidget::SetMapZoom(float Zoom, bool Animate) {
}

void UUIMapAreasWidget::SetGlowOnCurrentArea(bool FocusCameraToo) {
}

void UUIMapAreasWidget::SetAreaTextNewStatusAndVisibilities() {
}

void UUIMapAreasWidget::SetAreaNumAsActive(int32 AreaNumber) {
}

FName UUIMapAreasWidget::SetAreaAsActive(FName Area) {
    return NAME_None;
}

void UUIMapAreasWidget::ReInitualizeMap() {
}

void UUIMapAreasWidget::PlaceIcons_TravelStones() {
}

void UUIMapAreasWidget::PlaceIcons_SaveStones() {
}

void UUIMapAreasWidget::PlaceIcons_Players() {
}

void UUIMapAreasWidget::PlaceIcons_Markers() {
}

void UUIMapAreasWidget::PlaceIcons_InactiveQuestZones() {
}

void UUIMapAreasWidget::PlaceIcons_ActiveQuestZones() {
}

void UUIMapAreasWidget::PlaceIcons() {
}

void UUIMapAreasWidget::PlaceIcon_CorpseLoot() {
}

void UUIMapAreasWidget::MakeQuestZoneImages() {
}

void UUIMapAreasWidget::MakeAreaImages() {
}

FVector2D UUIMapAreasWidget::GetMapPosFromWorld(FVector WorldLoc) {
    return FVector2D{};
}


void UUIMapAreasWidget::DebugQuestZonesFunction() {
}

void UUIMapAreasWidget::CreateAllOptionalAreas(UCanvasPanel* ParentCanvas, FVector2D Position, FVector2D Size) {
}

void UUIMapAreasWidget::ClearAreaTextNewStatus(bool MainTitles) {
}

void UUIMapAreasWidget::CleanupQuestZoneImages() {
}

void UUIMapAreasWidget::CleanupAreaImages() {
}

void UUIMapAreasWidget::ChangeOverFocusedZones() {
}

void UUIMapAreasWidget::ChangeOverActiveZones() {
}

void UUIMapAreasWidget::CenterMapOnWorldLocation(FVector Position, bool Animate) {
}

void UUIMapAreasWidget::CenterMapOnArea(FName AreaRowName, bool Animate) {
}

UUIMapIcon* UUIMapAreasWidget::AddMapIcon(UCanvasPanel* Canvas, EUIMapIconTypes TypeOfIcon, ENpcType NpcType, FTravelPointData TravelPointData, bool ActiveQuest, FVector InWorldPosition, UPaperSprite* TextureOveride, float OverrideSize) {
    return NULL;
}

void UUIMapAreasWidget::AddDeltaToCameraZoom(float AddCameraDelta) {
}

void UUIMapAreasWidget::AddDeltaToCameraPosition(FVector2D AddCameraDelta) {
}

UUIMapAreasWidget::UUIMapAreasWidget() {
    this->RasterStyleMap = false;
    this->UseInDungeonStyle = false;
    this->UsePlayerPositionLock = false;
    this->OwningMenuTab = NULL;
    this->MapManager = NULL;
    this->AshenBaseGameState = NULL;
    this->DebugQuestZones = false;
    this->RadiusToMakeZoneAnIcon = 0.00f;
    this->BumpZoneRadii_ThisMinValue = 0.00f;
    this->UI_MapIconClass = NULL;
    this->IconCanvas = NULL;
    this->Icon_ActiveZonesCanvas = NULL;
    this->Icon_FocusedZonesCanvas = NULL;
    this->Icon_PlayerCanvas = NULL;
    this->Icon_RemotePlayerCanvas = NULL;
    this->Icon_SaveStoneCanvas = NULL;
    this->Icon_TravelStoneCanvas = NULL;
    this->Icon_DungeonCanvas = NULL;
    this->Icon_CaveCanvas = NULL;
    this->Icon_CorpseCanvas = NULL;
    this->PositionCanvas = NULL;
    this->QuestZoneCanvas = NULL;
    this->GlobalIconAlphaMax = 0.00f;
    this->QuestZonesChangeSpeed = 3.00f;
    this->QuestZoneChangeRadialMod = NULL;
    this->LastFocusedQuestZone = ENpcType::_Max;
    this->LastActiveQuestZone = ENpcType::_Max;
    this->QuestZonesMax = 4;
    this->QuestZonesPointsMax = 7;
    this->QuestZoneBoarderSize = 0.00f;
    this->QuestZoneMaterial_1 = NULL;
    this->QuestZoneMaterial_2 = NULL;
    this->QuestZoneMaterial_3 = NULL;
    this->QuestZoneMaterial_4 = NULL;
    this->QuestZoneMaterial_5 = NULL;
    this->QuestZoneMaterial_6 = NULL;
    this->QuestZoneMaterial_7 = NULL;
    this->GroundTexture = NULL;
    this->SmallTexture = NULL;
    this->StructTexture = NULL;
    this->WaterTexture = NULL;
    this->MountainsTexture = NULL;
    this->GroundMaterial = NULL;
    this->SmallMaterial = NULL;
    this->StructMaterial = NULL;
    this->WaterMaterial = NULL;
    this->MountainsMaterial = NULL;
    this->PathMaterial = NULL;
    this->BoarderMaterial = NULL;
    this->ActiveBoarderMaterial = NULL;
    this->UnExploredMaterial = NULL;
    this->UnExploredMaterial_Dynamic = NULL;
    this->UnexploredImage = NULL;
    this->HasPendingActives = false;
    this->HasMaxRadActives = false;
    this->RadiusModActives = 0.00f;
    this->HasPendingFocused = false;
    this->HasMaxRadFocused = false;
    this->RadiusModFocused = 0.00f;
    this->MoveMapCameraLerpTime = 0.00f;
    this->MapZoomLerpTime = 0.00f;
    this->CamMovementCurve = NULL;
    this->MapZoomAmount = 1.00f;
    this->MapZoomAmount_Enlarged = 1.50f;
    this->MoveMapCameraLerpTimer = 0.00f;
    this->LerpingMapCamera = false;
    this->IdealMapZoomValue = 0.00f;
    this->CurrentMapZoomValue = 1.00f;
    this->StartMapZoomValue = 0.00f;
    this->MapZoomLerpTimer = 0.00f;
    this->LerpingMapZoom = false;
    this->ZoomForSubAreaTitles = 1.10f;
    this->bIsMapEnlarged = true;
    this->AreaTextalphaSpeed = 1.00f;
    this->AreaTextalpha = 0.00f;
    this->LastAreaTextalpha = -1.00f;
    this->JuiceIndex = 0;
    this->JuiceImage = NULL;
    this->JuiceBlackBackground = NULL;
    this->JuiceGreyOut = NULL;
    this->JuiceMaterial = NULL;
    this->JuiceMaterialInstance = NULL;
}

