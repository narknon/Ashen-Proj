#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EQuestItem.h"
#include "LootBoxComponent.generated.h"

class ACreature;
class UItemTable;
class UAshenUserWidget;
class UItemBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API ULootBoxComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemTable* LootTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UItemBase>> PopulateWithItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle UseLootTableDataRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitDropCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombineSearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAshenUserWidget* InstancedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerCanStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenPopulated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLootHasExpired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerStorageBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LootBoxDefualtSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* LootBoxUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterpToChest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcAcquiredOpenedAmount;
    
    ULootBoxComponent();
    UFUNCTION(BlueprintCallable)
    void PopulateFromJSON();
    
    UFUNCTION(BlueprintCallable)
    void Populate();
    
    UFUNCTION(BlueprintCallable)
    void OpenLootBox(TSubclassOf<UAshenUserWidget> LootWidget, ACreature* Source);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLootEmpty();
    
    UFUNCTION(BlueprintCallable)
    void LootAllQuestItems(TArray<UItemTable*> Tables);
    
    UFUNCTION(BlueprintCallable)
    TArray<UItemTable*> FindNearbyLootBoxes(bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable)
    void ExpireLootBox();
    
    UFUNCTION(BlueprintCallable)
    void ExitLootBox();
    
    UFUNCTION(BlueprintCallable)
    TArray<EQuestItem> ContainedQuestItems();
    
    UFUNCTION(BlueprintCallable)
    void CheckIsEmpty(bool& bIsEmpty, bool ExpireIfEmpty);
    
    UFUNCTION(BlueprintCallable)
    void AddToBox(UItemBase* ItemToAdd, bool& bWasAdded, bool& addedToExistingItem);
    
};

