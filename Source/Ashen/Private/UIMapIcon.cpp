#include "UIMapIcon.h"

class UPaperSprite;
class UTexture2D;


void UUIMapIcon::UnFocus() {
}


void UUIMapIcon::SetupFunction() {
}

void UUIMapIcon::SetSelected(bool Selected) {
}

void UUIMapIcon::SetNew(bool NewActive) {
}








FVector2D UUIMapIcon::GetNewScaleDimensionsSprite(float NexX, UPaperSprite* TextureRef) {
    return FVector2D{};
}

FVector2D UUIMapIcon::GetNewScaleDimensions(float NexX, UTexture2D* TextureRef) {
    return FVector2D{};
}


void UUIMapIcon::Focus() {
}

UUIMapIcon::UUIMapIcon() {
    this->IconRef = NULL;
    this->Icon_AnimationRef = NULL;
    this->GlowRef = NULL;
    this->PlayerMarkerRef = NULL;
    this->Icon_TravelStoneBoarderRef = NULL;
    this->Icon_TravelStoneBoarderSmallRef = NULL;
    this->PressButtonRef = NULL;
    this->Map_NewWidgetRef = NULL;
    this->OwningWidget = NULL;
    this->bSelected = false;
    this->bFocused = false;
    this->IsLocalStone = false;
    this->IconType = EUIMapIconTypes::None;
    this->TextureOverride = NULL;
    this->OverrideSize = -1.00f;
    this->NPCRefrence = ENpcType::None;
    this->bActiveQuest = false;
    this->PlayerTexture = NULL;
    this->PlayerTextureBlur = NULL;
    this->RemotePlayerTexture = NULL;
    this->RemotePlayerTextureBlur = NULL;
    this->SaveStoneTexture = NULL;
    this->SaveStoneTexture_Blured = NULL;
    this->TravelStoneTexture = NULL;
    this->TravelStoneBoundary = NULL;
    this->TownTexture = NULL;
    this->TownTexture_Blured = NULL;
    this->QuestLocationSprite = NULL;
    this->ActiveQuestLocationSprite = NULL;
    this->DungeonTexture = NULL;
    this->DungeonTexture_Blured = NULL;
    this->CaveTexture = NULL;
    this->CaveTexture_Blured = NULL;
    this->CorpseLootTexture = NULL;
    this->CorpseLootTextureBlur = NULL;
    this->SpecialFadeIn = false;
    this->LastIconScaleAdjustment = 0.00f;
    this->IconSizePlayer = 25.00f;
    this->IconSizeSaveStone = 35.00f;
    this->IconSizeTravelStone = 40.00f;
    this->IconSizeTravelStoneBoardary = 80.00f;
    this->IconSizeTown = 40.00f;
    this->IconSizeQuestLoction = 25.00f;
    this->IconSizeDungeon = 40.00f;
    this->IconSizeCave = 40.00f;
    this->IconSizeCorpseLoot = 25.00f;
    this->PlayerIconRotationOffest = 0.00f;
    this->PlayerIconLockedRotationOffset = 0.00f;
    this->AshenGameState = NULL;
    this->TimeAlive = 0.00f;
}

