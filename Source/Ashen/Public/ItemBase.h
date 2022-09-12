#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Recipe.h"
#include "UObject/Object.h"
#include "EItemQuality.h"
#include "EItemPluralityPreface.h"
#include "EItemType.h"
#include "EItemIdeal.h"
#include "EItemBehaviour.h"
#include "EItemFanfare.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EQuestItem.h"
#include "UIStatBarData.h"
#include "ItemBase.generated.h"

class UStaticMesh;
class UItemBase;
class APhysicalItem;
class UItemTable;
class UPaperSprite;
class ACreature;
class USkeletalMeshComponent;
class UWorld;

UCLASS(Blueprintable)
class ASHEN_API UItemBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemChangesDelegate, UItemBase*, Source);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhysicalItem* PhysicalItem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecipe Recipe;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugTableItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClassAsHealingItemForTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APhysicalItem> PhysicalItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FullName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FullNameTier0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FullNameTier1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FullNameTier2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTieredNamingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Brief;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RewardTextOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CraftingUnlockRewardTextOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> EffectDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> EffectTitlesForCPPUIEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemPluralityPreface PluralType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemQuality Quality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTieredVisualsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemIdeal Ideal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemBehaviour Behaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemFanfare UI_Fanfare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* InspectionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InspectionMeshPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator InspectionMeshRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InspectionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestItem QuestItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasCustomStackingLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableFanfare;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastStackDelta;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemChangesDelegate OnChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* CreatureOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACreature* OldOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CharacterSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemTable* Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisualIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NewItem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemSackCombinationRange;
    
public:
    UItemBase();
    UFUNCTION(BlueprintCallable)
    bool UseItem();
    
    UFUNCTION(BlueprintCallable)
    bool StoreInNearestSack(UWorld* World, const FVector& SackLocation, bool& addedToExistingItem);
    
    UFUNCTION(BlueprintCallable)
    void SplitStackSingle(UItemBase*& NewItemStack, bool& SplitSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void SplitStack(UItemBase*& NewItemStack, bool& SplitSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void SetVisualIndex_Saved(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetStacks(int32 NewStackAmount);
    
    UFUNCTION(BlueprintCallable)
    void SetOwnerLocation(ACreature* NewOwner, UItemTable* NewLocation, int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLastStackDelta(int32 Delta);
    
    UFUNCTION(BlueprintCallable)
    void SetItemQuality_Level(EItemQuality QualityNew, int32 ItemLevelNew);
    
    UFUNCTION(BlueprintCallable)
    void SaveItem();
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromOwnerAndDestory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUseItem_Blueprint();
    
    UFUNCTION(BlueprintCallable)
    bool OnUseItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APhysicalItem* MakePhysicalItem();
    
    UFUNCTION(BlueprintCallable)
    void ItemUpdated(UItemBase* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsTheSameDataType(const UItemBase* Other, bool& SameDataType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsStackable(bool& CanStack) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovmentLocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemUsable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInactiveQuestItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsFullItem(bool& IsFull) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsEmptyItem(bool& IsEmpty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDropLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetWeaponQualityName(bool bForNextTier);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUIStackAmountInternal();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUIStackAmount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTierFullName(bool bForNextTier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStacks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRecipe GetRecipe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocationIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemTable* GetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastStackDelta() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FUIStatBarData> GetItemUIStatBars(bool SkipCustomization);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPaperSprite* GetIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetDescriptionPreText(FString& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetDescriptionPostText(FString& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACreature* GetCreatureOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetBlueprintImplementedStatBars(TArray<FUIStatBarData>& StatBars);
    
    UFUNCTION(BlueprintCallable)
    bool DropItemInWorld(ACreature* CreatureResponsible, bool& addedToExistingItem, bool& DestroyInstead);
    
    UFUNCTION(BlueprintCallable)
    bool DestroyWhenEmpty();
    
    UFUNCTION(BlueprintCallable)
    void CustomizeItemStatBars(TArray<FUIStatBarData>& StatBars);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItemBase* Clone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CanSplit(bool& NewCanSplit) const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyStackDelta(int32 StackDeltaAmount);
    
    UFUNCTION(BlueprintCallable)
    void AddToStack(UItemBase* SourceItemStack, bool& SourceWasUsedUp);
    
};

