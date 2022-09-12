#pragma once
#include "CoreMinimal.h"
#include "UIStatus.h"
#include "EItemState.h"
#include "EItemType.h"
#include "UIEquipment.generated.h"

class UImage;
class UUIItemGridSlot;
class UCanvasPanel;
class UItemTable;
class UItemBase;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIEquipment : public UUIStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePersonalLootBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ConfirmButtonCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInEquipmentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemType> CurrentItemFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemTable*> CurrentTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUIItemGridSlot*> BottomGridSlotItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BottomSlotsXDimension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIItemGridSlot* CurrentlySelectedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIItemGridSlot* CurrentlyFocusedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIItemGridSlot* LastFocusedSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* CurrentlySelectedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* ItemUtility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* ItemShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* ItemThrownWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* ItemBackWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* ItemSideWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* ItemArmour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* ItemBelt1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* ItemBelt2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* ItemWaterBottle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* ItemPotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetIconUtility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetIconShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetIconBackWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetIconBackThrownWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetIconSideWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetIconArmour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetIconBelt1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetIconBelt2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetIconWaterBottle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetIconPotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* StubIconUtility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* StubIconShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* StubIconBackWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* StubIconBackThrownWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* StubIconSideWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* StubIconArmour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* StubIconBelt1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* StubIconBelt2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* StubIconWaterBottle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* StubIconPotion;
    
    UUIEquipment();
    UFUNCTION(BlueprintCallable)
    void UnequipSelected();
    
    UFUNCTION(BlueprintCallable)
    void SetIconIfValid(UItemBase* CheckItem, UImage* Widget, UImage* StubWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetConfirmTriggerable(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReturnToEquipment();
    
    UFUNCTION(BlueprintCallable)
    void RefreshButtonFaces();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshAllSlots();
    
    UFUNCTION(BlueprintCallable)
    void Prepare();
    
    UFUNCTION(BlueprintCallable)
    void PopulateSlotsPhase2(TArray<UUIItemGridSlot*> Icons, TArray<UItemTable*> Tables, TArray<EItemType> ItemFilters, bool bSetFocus);
    
    UFUNCTION(BlueprintCallable)
    void PopulateInventoryPhase2(TArray<UUIItemGridSlot*> Icons, TArray<EItemType> ItemFilters, bool bSetFocus);
    
    UFUNCTION(BlueprintCallable)
    int32 DropFromInventory(bool& AbleToDrop);
    
    UFUNCTION(BlueprintCallable)
    void ConfigureWidgetsStubs(UImage* Armour, UImage* TwoHand, UImage* TwoHandThrown, UImage* Belt1, UImage* Belt2, UImage* Potion, UImage* Shield, UImage* Sidearm, UImage* Lantern, UImage* Waterbottle);
    
    UFUNCTION(BlueprintCallable)
    void ConfigureWidgetsIcons(UImage* Armour, UImage* TwoHand, UImage* TwoHandThrown, UImage* Belt1, UImage* Belt2, UImage* Potion, UImage* Shield, UImage* Sidearm, UImage* Lantern, UImage* Waterbottle);
    
    UFUNCTION(BlueprintCallable)
    void CollectCurrentEquipment();
    
    UFUNCTION(BlueprintCallable)
    void ActionGridSlotEquipment(UUIItemGridSlot* SlotData, bool bActionSlot, FText& ActionMessage, EItemState ItemState);
    
    UFUNCTION(BlueprintCallable)
    void ActionGridSlotBelt(UUIItemGridSlot* SlotData, bool bActionSlot, FText& ActionMessage, EItemState ItemState, int32 BeltIndex);
    
    UFUNCTION(BlueprintCallable)
    void ActionGridSlotArmour(UUIItemGridSlot* SlotData, bool bActionSlot, FText& ActionMessage, EItemState ItemState);
    
    UFUNCTION(BlueprintCallable)
    void ActionGridSlot(UUIItemGridSlot* SlotData, bool bActionSlot, FText& ActionMessage);
    
};

