#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UISelectableMenuSlot.h"
#include "UObject/NoExportTypes.h"
#include "EMenuSettingValue.h"
#include "EUIOnOffSetting.h"
#include "EUITutorialName.h"
#include "EPlatformSpecific.h"
#include "UIDynamicMenuOption.generated.h"

class UImage;
class UUIPhase2MenuTab;
class UAshenUserWidget;
class UUIDynamicMenuSelector;
class UUserWidget;
class UHorizontalBox;
class UTextBlock;
class UUIDynamicMenuTab;
class UUIInventoryMenuTab;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIDynamicMenuOption : public UUISelectableMenuSlot {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAshenSelectorEventDynamicMenuOption, UAshenUserWidget*, Source, float, SaveMappedValue, float, SelectorValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAshenPressEventDynamicMenuOption, UAshenUserWidget*, Source);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAshenFocusEventDynamicMenuOption, UAshenUserWidget*, Source, bool, Focused);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshenPressEventDynamicMenuOption OnPressEvent_DynamicMenuOption;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshenFocusEventDynamicMenuOption OnFocusEvent_DynamicMenuOption;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshenSelectorEventDynamicMenuOption OnSelectorChangeEvent_DynamicMenuOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIPhase2MenuTab* OwningTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIDynamicMenuSelector* Selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIDynamicMenuSelector> SelectorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Selector_SizeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Selector_RemapValuesForSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoSaveAnyUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowFocusWhenNavDissabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> SelectorOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuSettingValue ProfileSaveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GraphicsSaveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIOnOffSetting UIOnOffSaveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* GlowEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* HoverHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* HoverHighlight2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* PressHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CenterText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EUITutorialName> ReliventTutorialArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPlatformSpecific> RemoveOptionOnPlatforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemoveInShipping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHorizontalBox* SelectCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UTextBlock*> TextRenderer;
    
    UUIDynamicMenuOption();
    UFUNCTION(BlueprintCallable)
    void SetupComponents(UHorizontalBox* _SelectCanvas, TArray<UTextBlock*> _TextRenderer, UUserWidget* _GlowComponent, UImage* _HoverHighlight, UImage* _PressHighlight);
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool Selected);
    
    UFUNCTION(BlueprintCallable)
    void SetPressed(bool Pressed);
    
    UFUNCTION(BlueprintCallable)
    void SetGlow(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressButton();
    
    UFUNCTION(BlueprintCallable)
    void OverrideText(FText NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIDynamicMenuTab* GetOwningTabMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUIInventoryMenuTab* GetOwningTabInventory() const;
    
    UFUNCTION(BlueprintCallable)
    void CustomSetup(FText _OptionText, TSubclassOf<UUIDynamicMenuSelector> _SelectorType, int32 _Selector_SizeValue, TArray<FText> _SelectorOptions, FVector2D _Selector_RemapValuesForSave, bool _AutoSaveAnyUpdates, EMenuSettingValue _ProfileSaveName, const FString& _GraphicsSaveName, EUIOnOffSetting _UIOnOffSaveName, bool _CenterText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSelector();
    
};

