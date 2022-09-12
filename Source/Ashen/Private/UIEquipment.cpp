#include "UIEquipment.h"

class UItemBase;
class UUIItemGridSlot;
class UImage;
class UItemTable;

void UUIEquipment::UnequipSelected() {
}

void UUIEquipment::SetIconIfValid(UItemBase* CheckItem, UImage* Widget, UImage* StubWidget) {
}

void UUIEquipment::SetConfirmTriggerable(bool bEnabled) {
}


void UUIEquipment::RefreshButtonFaces() {
}


void UUIEquipment::Prepare() {
}

void UUIEquipment::PopulateSlotsPhase2(TArray<UUIItemGridSlot*> Icons, TArray<UItemTable*> Tables, TArray<EItemType> ItemFilters, bool bSetFocus) {
}

void UUIEquipment::PopulateInventoryPhase2(TArray<UUIItemGridSlot*> Icons, TArray<EItemType> ItemFilters, bool bSetFocus) {
}

int32 UUIEquipment::DropFromInventory(bool& AbleToDrop) {
    return 0;
}

void UUIEquipment::ConfigureWidgetsStubs(UImage* Armour, UImage* TwoHand, UImage* TwoHandThrown, UImage* Belt1, UImage* Belt2, UImage* Potion, UImage* Shield, UImage* Sidearm, UImage* Lantern, UImage* Waterbottle) {
}

void UUIEquipment::ConfigureWidgetsIcons(UImage* Armour, UImage* TwoHand, UImage* TwoHandThrown, UImage* Belt1, UImage* Belt2, UImage* Potion, UImage* Shield, UImage* Sidearm, UImage* Lantern, UImage* Waterbottle) {
}

void UUIEquipment::CollectCurrentEquipment() {
}

void UUIEquipment::ActionGridSlotEquipment(UUIItemGridSlot* SlotData, bool bActionSlot, FText& ActionMessage, EItemState ItemState) {
}

void UUIEquipment::ActionGridSlotBelt(UUIItemGridSlot* SlotData, bool bActionSlot, FText& ActionMessage, EItemState ItemState, int32 BeltIndex) {
}

void UUIEquipment::ActionGridSlotArmour(UUIItemGridSlot* SlotData, bool bActionSlot, FText& ActionMessage, EItemState ItemState) {
}

void UUIEquipment::ActionGridSlot(UUIItemGridSlot* SlotData, bool bActionSlot, FText& ActionMessage) {
}

UUIEquipment::UUIEquipment() {
    this->bUsePersonalLootBox = false;
    this->ConfirmButtonCanvas = NULL;
    this->bInEquipmentMode = false;
    this->BottomSlotsXDimension = 5;
    this->CurrentlySelectedSlot = NULL;
    this->CurrentlyFocusedSlot = NULL;
    this->LastFocusedSlot = NULL;
    this->CurrentlySelectedItem = NULL;
    this->ItemUtility = NULL;
    this->ItemShield = NULL;
    this->ItemThrownWeapon = NULL;
    this->ItemBackWeapon = NULL;
    this->ItemSideWeapon = NULL;
    this->ItemArmour = NULL;
    this->ItemBelt1 = NULL;
    this->ItemBelt2 = NULL;
    this->ItemWaterBottle = NULL;
    this->ItemPotion = NULL;
    this->WidgetIconUtility = NULL;
    this->WidgetIconShield = NULL;
    this->WidgetIconBackWeapon = NULL;
    this->WidgetIconBackThrownWeapon = NULL;
    this->WidgetIconSideWeapon = NULL;
    this->WidgetIconArmour = NULL;
    this->WidgetIconBelt1 = NULL;
    this->WidgetIconBelt2 = NULL;
    this->WidgetIconWaterBottle = NULL;
    this->WidgetIconPotion = NULL;
    this->StubIconUtility = NULL;
    this->StubIconShield = NULL;
    this->StubIconBackWeapon = NULL;
    this->StubIconBackThrownWeapon = NULL;
    this->StubIconSideWeapon = NULL;
    this->StubIconArmour = NULL;
    this->StubIconBelt1 = NULL;
    this->StubIconBelt2 = NULL;
    this->StubIconWaterBottle = NULL;
    this->StubIconPotion = NULL;
}

