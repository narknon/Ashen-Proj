#include "UIInventoryMenuTab.h"

class UUIPhase2Menu;
class UCanvasPanel;
class UUIItemGridSlot;

void UUIInventoryMenuTab::UpdateFunc(float DeltaTime) {
}

void UUIInventoryMenuTab::SetupFunc(UUIPhase2Menu* OwnerRef, bool StationaryWidget, bool DissableTempFade) {
}

bool UUIInventoryMenuTab::HasMultiDirectionalTabSwitching_Implementation() const {
    return false;
}

void UUIInventoryMenuTab::FadeOutTabTemp(ECompassDirs Dir) {
}

void UUIInventoryMenuTab::FadeOutTab2Close(ECompassDirs Dir) {
}

void UUIInventoryMenuTab::FadeInTabFromTemp(ECompassDirs Dir) {
}

void UUIInventoryMenuTab::FadeInTabFromClose(ECompassDirs Dir) {
}

void UUIInventoryMenuTab::CreatePersonalLootItemSlotGrid(int32 SizeX, int32 SizeY, float Spacing, float Size, FVector2D ZeroPosition, UCanvasPanel* ParentPanel, TArray<UUIItemGridSlot*>& OutArray) {
}


void UUIInventoryMenuTab::CreateItemSlotQuestGrid(int32 SizeX, int32 SizeY, float Spacing, float Size, FVector2D ZeroPosition, UCanvasPanel* ParentPanel, TArray<UUIItemGridSlot*>& OutArray) {
}

void UUIInventoryMenuTab::CreateInventoryItemSlotGrid(int32 SizeX, int32 SizeY, float Spacing, float Size, FVector2D ZeroPosition, UCanvasPanel* ParentPanel, TArray<UUIItemGridSlot*>& OutArray) {
}

UUIInventoryMenuTab::UUIInventoryMenuTab() {
}

