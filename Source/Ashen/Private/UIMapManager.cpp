#include "UIMapManager.h"
#include "Templates/SubclassOf.h"

class UUIMapAreasWidget;
class UQuestLine;
class UQuestState;
class UAreaChainData;

bool UUIMapManager::TravelToPoint(FTravelPointData TravelData, UQuestLine* UnlockQuestLine, TSubclassOf<UQuestState> UnlockQuestState, bool TestAcceptable) {
    return false;
}

void UUIMapManager::SetMapWidget(UUIMapAreasWidget* MapWidgetRef) {
}

UUIMapAreasWidget* UUIMapManager::GetMapWidget() {
    return NULL;
}

TMap<FName, UAreaChainData*> UUIMapManager::GetAreaChains() {
    return TMap<FName, UAreaChainData*>();
}

TArray<FTravelPointData> UUIMapManager::GetActiveSavePoints() {
    return TArray<FTravelPointData>();
}

void UUIMapManager::FindParentChains() {
}

void UUIMapManager::CleanupParentChains() {
}

UUIMapManager::UUIMapManager() {
    this->GameState = NULL;
    this->CanApplyAdditionalTexture = false;
    this->MapWidget = NULL;
    this->MapAreaWidgetClass = NULL;
    this->TravelMapWidgetClass = NULL;
}

