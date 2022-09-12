#include "UIMapTab.h"
#include "Templates/SubclassOf.h"

class UVerticalBox;
class UUIMapMenuOption;

void UUIMapTab::ReturnMouseCursorToCapturedPosition() {
}

void UUIMapTab::OnMousePressCaptureReleased() {
}

void UUIMapTab::OnMousePressCaptured() {
}

bool UUIMapTab::IsMouseWithinMapViewportWindow(FGeometry MapViewportGeometry) {
    return false;
}

bool UUIMapTab::IsMouseCapturedInViewportWindow() const {
    return false;
}

void UUIMapTab::AddTravelPointsToList(TArray<ETravelPointName> SortOrder, TSubclassOf<UUIMapMenuOption> WidgetClass, UVerticalBox* ListParentBox) {
}

UUIMapTab::UUIMapTab() {
}

