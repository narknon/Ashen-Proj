#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "EItemLocation.h"
#include "EItemType.h"
#include "ItemTable.generated.h"

class UItemTable;
class AActor;
class UItemBase;
class ACreature;

UCLASS(Blueprintable)
class ASHEN_API UItemTable : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemTableChangeDelegate, UItemTable*, Source, UItemBase*, Item);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemLocation Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFixedSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemType> TypePattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContainsNewItems;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemTableChangeDelegate OnItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemTableChangeDelegate OnItemRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemTableChangeDelegate OnItemInactive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemTableChangeDelegate OnItemActivate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemTableChangeDelegate OnItemChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemTableChangeDelegate OnTableFull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* CreatureOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemBase*> Items;
    
    UItemTable();
    UFUNCTION(BlueprintCallable)
    static void Stack(UItemBase* InDestination, UItemBase* InSource, UItemBase*& OutDestination, UItemBase*& OutSource, bool& WasStacked);
    
    UFUNCTION(BlueprintCallable)
    static void Split(UItemBase* InA, UItemBase*& OutA, UItemBase*& OutB, bool& WasSplit);
    
    UFUNCTION(BlueprintCallable)
    void SetCreatureOwner(ACreature* NewOwner);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemStacks(int32 Index, int32 StacksToRemove);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveItemByRef(UItemBase* Item);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFirstItemOfClass(TSubclassOf<UItemBase> Class, bool UI_Fanfare, bool StackReductionIsEnough, bool& Removed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void QueryItemVerbs(const bool MouseMode, const UItemBase* Item, bool& CanBeStacked, bool& CanBeSplit, bool& CanBeMoved) const;
    
    UFUNCTION(BlueprintCallable)
    void PackExtraSlotForSwap(bool Pack);
    
    UFUNCTION(BlueprintCallable)
    UItemBase* MoveItem(UItemBase* ItemToMove, UItemTable* TargetTable, bool& Successful, bool& Stacked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void HasItemsOfType(EItemType ItemType, bool& NewHasItemsOfType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSize(int32& ItemCount, int32& EmptyCount, int32& TotalCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EItemType GetItemTypeByIndex(const int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetItem(UItemBase*& Item, const int32& Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACreature* GetCreatureOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FreeSpaceForType(EItemType TypeToSearch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindNumberOfType(EItemType ItemType, bool SumStackTotals);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindNumberOfClass(TSubclassOf<UItemBase> ItemClass, bool SumStackTotals);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItemBase*> FindItemsOfType(EItemType ItemType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindItem(const UItemBase* Item, bool& Found, int32& Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemBase* FindFirstItemOfTypeWithIndex(EItemType ItemType, int32& Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemBase* FindFirstItemOfType(EItemType ItemType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemBase* FindFirstItemOfClassWithIndex(TSubclassOf<UItemBase> ItemClass, int32& Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemBase* FindFirstItemOfClass(TSubclassOf<UItemBase> ItemClass);
    
    UFUNCTION(BlueprintCallable)
    static void Exchange(const UItemBase* InA, const UItemBase* InB, UItemBase*& OutA, UItemBase*& OutB, bool& Exchanged);
    
    UFUNCTION(BlueprintCallable)
    void ClearPreferedVisualIndexs();
    
    UFUNCTION(BlueprintCallable)
    void ClearNewItemsTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CanStack(const UItemBase* A, const UItemBase* B, bool& NewCanStack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CanExchange(const UItemBase* A, const UItemBase* B, bool& NewCanExchange);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreTypeCompatible(EItemType ItemType, EItemType SlotType);
    
    UFUNCTION(BlueprintCallable)
    int32 AddToExistingStack(UItemBase* Item, bool& WasStacked, bool& MovedAllOfStack);
    
    UFUNCTION(BlueprintCallable)
    UItemBase* AddItemAnywhere(UItemBase* Item, int32& Index, bool& Added);
    
    UFUNCTION(BlueprintCallable)
    UItemBase* AddItem(UItemBase* Item, int32 Index, bool& Added);
    
};

