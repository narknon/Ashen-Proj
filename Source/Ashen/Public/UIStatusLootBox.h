#pragma once
#include "CoreMinimal.h"
#include "UIStatus.h"
#include "EItemType.h"
#include "UIStatusLootBox.generated.h"

class UUIItemGridSlot;
class ULootBoxComponent;
class UItemTable;
class UUniformGridPanel;
class UItemTalismanBase;
class UInventory;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIStatusLootBox : public UUIStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULootBoxComponent* PrimaryLootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemTable*> ConnectedTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPersonalLootBox;
    
    UUIStatusLootBox();
    UFUNCTION(BlueprintCallable)
    void UnlockTalisman(UItemTalismanBase* TalismanToUnlock);
    
    UFUNCTION(BlueprintCallable)
    void PopulateSlots(TArray<UUIItemGridSlot*> Icons, TArray<UItemTable*> Tables, TArray<EItemType> ItemFilters, bool bSetFocus);
    
    UFUNCTION(BlueprintCallable)
    void LootAllPossible(UUniformGridPanel* Panel, UInventory* PlayerInventory);
    
    UFUNCTION(BlueprintCallable)
    void LootAll(UUniformGridPanel* Panel, UInventory* PlayerInventory);
    
    UFUNCTION(BlueprintCallable)
    bool IsLootEmpty();
    
    UFUNCTION(BlueprintCallable)
    void EndLootBox();
    
    UFUNCTION(BlueprintCallable)
    void ActionGridSlot(UUIItemGridSlot* SlotData, bool bActionSlot, FText& ActionMessage, bool& Added, bool& Stacked);
    
};

