#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "EItemType.h"
#include "EEquipmentState.h"
#include "EEquipmentSlot.h"
#include "EItemLocation.h"
#include "Inventory.generated.h"

class UItemWeaponBase;
class UAshenGameInstance;
class UAkAudioEvent;
class UItemTable;
class UItemEquipment;
class AHumanoid;
class UItemBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UInventory : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCurrentBeltItemChangeDelegate);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenGameInstance* AshenGameInstance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsForNonPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUserDrivenChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemType> DEBUG_ALLITEM_GrowPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemType> EquipmentGrowPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemType> BeltGrowPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemType> BackpackGrowPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemType> CraftingGrowPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemType> CurrencyGrowPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemType> QuestGrowPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemType> TalismanGrowPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemType> TalismanPrimaryGrowPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemType> PersonalLootboxGrowPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemTable* DEBUG_ALLITEMTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemTable* EquipmentTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemTable* BeltTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemTable* BackpackTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemTable* CraftingTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemTable* CurrencyTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemTable* QuestTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemTable* TalismanTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemTable* TalismanPrimaryTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UItemTable* PersonalLootboxTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugItemsAsyncLoadInProgress;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrentBeltItemChangeDelegate OnCurrentBeltItemSwitched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemEquipment* SavedLeftHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemWeaponBase* SavedRightHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TalismanAddedAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TalismanRemovedAudioEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoid* Humanoid;
    
public:
    UInventory();
private:
    UFUNCTION(BlueprintCallable)
    void UpdateSave(UItemTable* Source, UItemBase* Item);
    
public:
    UFUNCTION(BlueprintCallable)
    bool UnEquipTalisman(UItemBase* Item);
    
    UFUNCTION(BlueprintCallable)
    bool UnEquipItem(UItemBase* Item, UItemTable* AddToTable, bool UIFanFare);
    
    UFUNCTION(BlueprintCallable)
    bool UnequipEquipment(UItemBase* Item, UItemTable* AddToTable);
    
    UFUNCTION(BlueprintCallable)
    bool UnequipBelt(int32 BeltIndex, UItemTable* AddToTable);
    
    UFUNCTION(BlueprintCallable)
    UItemBase* UnequipArmour(UItemBase* Item, UItemTable* AddToTable);
    
    UFUNCTION(BlueprintCallable)
    void ToggleEquipped();
    
    UFUNCTION(BlueprintCallable)
    void SwitchToSpecificBeltItem(UItemBase* BeltItem);
    
    UFUNCTION(BlueprintCallable)
    void SwitchCurrentBeltItem(bool Reverse);
    
    UFUNCTION(BlueprintCallable)
    void SwitchBeltItem(int32 ItemIndex, UItemBase* Item, EEquipmentSlot EquipmentSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetStatesInTable(EEquipmentState EquipmentState, UItemTable* ItemTable);
    
    UFUNCTION(BlueprintCallable)
    void ResetSavedEquipment();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveItemOfClassFromLocation(TSubclassOf<UItemBase> ItemClass, EItemLocation Location, int32 NumStacks);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveItemOfClass(TSubclassOf<UItemBase> ItemClass, int32 NumStacks);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllOfClassFromLocation(UClass* ItemClass, EItemLocation Location);
    
private:
    UFUNCTION(BlueprintCallable)
    void PackExtraSlotsForSwap(bool Pack);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDebugItemsLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeltEmpty();
    
    UFUNCTION(BlueprintCallable)
    void InituilizeDebugItems();
    
    UFUNCTION(BlueprintCallable)
    bool HeroObtainedItem(TSubclassOf<UItemBase> ItemClass);
    
    UFUNCTION(BlueprintCallable)
    bool HeroHasItemType(EItemType ItemType);
    
    UFUNCTION(BlueprintCallable)
    UItemWeaponBase* GetRightHand();
    
    UFUNCTION(BlueprintCallable)
    UItemWeaponBase* GetNextRightHand();
    
    UFUNCTION(BlueprintCallable)
    UItemEquipment* GetNextLeftHand();
    
    UFUNCTION(BlueprintCallable)
    UItemEquipment* GetLeftHand();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentAndNextBeltItems(UItemBase*& CurrentItem, UItemBase*& NextItem, bool& bShowNextBeltItem);
    
    UFUNCTION(BlueprintCallable)
    bool EquipTalismanIndexed(UItemBase* Item, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool EquipTalisman(UItemBase* Item);
    
    UFUNCTION(BlueprintCallable)
    bool EquipItem(UItemBase* Item, EEquipmentSlot Slot, EItemLocation CurrentDiscardLocation, bool UIFanFare);
    
    UFUNCTION(BlueprintCallable)
    bool EquipEquipment(UItemBase* Item, EItemLocation CurrentDiscardTable);
    
    UFUNCTION(BlueprintCallable)
    bool EquipBeltItem(UItemBase* Item, EEquipmentSlot EquipmentSlot, EItemLocation CurrentDiscardTable);
    
    UFUNCTION(BlueprintCallable)
    UItemBase* EquipArmour(UItemBase* Item, EItemLocation CurrentDiscardTable);
    
    UFUNCTION(BlueprintCallable)
    float CalculateEquipmentWeight();
    
};

