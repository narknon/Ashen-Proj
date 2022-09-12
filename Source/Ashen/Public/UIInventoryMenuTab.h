#pragma once
#include "CoreMinimal.h"
#include "UIPhase2MenuTab.h"
#include "ECompassDirs.h"
#include "UObject/NoExportTypes.h"
#include "UIInventoryMenuTab.generated.h"

class UUIPhase2Menu;
class UCanvasPanel;
class UUIItemGridSlot;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIInventoryMenuTab : public UUIPhase2MenuTab {
    GENERATED_BODY()
public:
    UUIInventoryMenuTab();
    UFUNCTION(BlueprintCallable)
    void UpdateFunc(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetupFunc(UUIPhase2Menu* OwnerRef, bool StationaryWidget, bool DissableTempFade);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool HasMultiDirectionalTabSwitching() const;
    
    UFUNCTION(BlueprintCallable)
    void FadeOutTabTemp(ECompassDirs Dir);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutTab2Close(ECompassDirs Dir);
    
    UFUNCTION(BlueprintCallable)
    void FadeInTabFromTemp(ECompassDirs Dir);
    
    UFUNCTION(BlueprintCallable)
    void FadeInTabFromClose(ECompassDirs Dir);
    
    UFUNCTION(BlueprintCallable)
    void CreatePersonalLootItemSlotGrid(int32 SizeX, int32 SizeY, float Spacing, float Size, FVector2D ZeroPosition, UCanvasPanel* ParentPanel, TArray<UUIItemGridSlot*>& OutArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUIItemGridSlot* CreateItemSlotWidget();
    
    UFUNCTION(BlueprintCallable)
    void CreateItemSlotQuestGrid(int32 SizeX, int32 SizeY, float Spacing, float Size, FVector2D ZeroPosition, UCanvasPanel* ParentPanel, TArray<UUIItemGridSlot*>& OutArray);
    
    UFUNCTION(BlueprintCallable)
    void CreateInventoryItemSlotGrid(int32 SizeX, int32 SizeY, float Spacing, float Size, FVector2D ZeroPosition, UCanvasPanel* ParentPanel, TArray<UUIItemGridSlot*>& OutArray);
    
};

