#include "UIDynamicMenuOption.h"
#include "Templates/SubclassOf.h"

class UImage;
class UHorizontalBox;
class UUIDynamicMenuSelector;
class UTextBlock;
class UUserWidget;
class UUIDynamicMenuTab;
class UUIInventoryMenuTab;

void UUIDynamicMenuOption::SetupComponents(UHorizontalBox* _SelectCanvas, TArray<UTextBlock*> _TextRenderer, UUserWidget* _GlowComponent, UImage* _HoverHighlight, UImage* _PressHighlight) {
}

void UUIDynamicMenuOption::SetSelected(bool Selected) {
}

void UUIDynamicMenuOption::SetPressed(bool Pressed) {
}

void UUIDynamicMenuOption::SetGlow(bool Visible) {
}



void UUIDynamicMenuOption::OverrideText(FText NewText) {
}

UUIDynamicMenuTab* UUIDynamicMenuOption::GetOwningTabMenu() const {
    return NULL;
}

UUIInventoryMenuTab* UUIDynamicMenuOption::GetOwningTabInventory() const {
    return NULL;
}

void UUIDynamicMenuOption::CustomSetup(FText _OptionText, TSubclassOf<UUIDynamicMenuSelector> _SelectorType, int32 _Selector_SizeValue, TArray<FText> _SelectorOptions, FVector2D _Selector_RemapValuesForSave, bool _AutoSaveAnyUpdates, EMenuSettingValue _ProfileSaveName, const FString& _GraphicsSaveName, EUIOnOffSetting _UIOnOffSaveName, bool _CenterText) {
}


UUIDynamicMenuOption::UUIDynamicMenuOption() {
    this->OwningTab = NULL;
    this->Selector = NULL;
    this->SelectorType = NULL;
    this->Selector_SizeValue = 0;
    this->AutoSaveAnyUpdates = false;
    this->AllowFocusWhenNavDissabled = false;
    this->ProfileSaveName = EMenuSettingValue::None;
    this->UIOnOffSaveName = EUIOnOffSetting::None;
    this->GlowEffect = NULL;
    this->HoverHighlight = NULL;
    this->HoverHighlight2 = NULL;
    this->PressHighlight = NULL;
    this->CenterText = false;
    this->RemoveInShipping = false;
    this->SelectCanvas = NULL;
}

