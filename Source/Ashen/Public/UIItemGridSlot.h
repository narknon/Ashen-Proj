#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UISelectableMenuSlot.h"
#include "EItemLocation.h"
#include "Styling/SlateTypes.h"
#include "UIItemGridSlot.generated.h"

class UImage;
class UWidget;
class UItemBase;
class UButton;
class UItemTable;
class UInventory;
class UTextBlock;
class UUIPhase2EquipTab;
class UUIPhase2MenuTab;
class UCurveFloat;
class UScaleBox;
class UPaperSprite;
class UCanvasPanel;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIItemGridSlot : public UUISelectableMenuSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* SlotItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWidget* OwningWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemLocation SlotItemLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemTable* SlotTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* LastSlotItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTutorialReliventWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTopInventoryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInventory* UseInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle MainStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle FocusedStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButton* ButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingFocusedStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSentInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentScrollCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentScrollCooldownReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldBeFocusableSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldHideIconChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayEmptySlotAsHandIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayHandIconAsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetOuterSelectToRed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonIconOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonIconOpacityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastIconFadeLerp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIconOpacityEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* WidgetIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* WidgetCountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* WidgetWeightText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UButton* WidgetButton;
    
    UUIItemGridSlot();
    UFUNCTION(BlueprintCallable)
    void UpdateSlotPhase2();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSlot();
    
    UFUNCTION(BlueprintCallable)
    void UpdateNonIconOpacity(UImage* OuterSelectLarge, UImage* OuterSelectSmall, UImage* SocketStd, UImage* InnerSelectImage, UImage* BackgroundCounter, UImage* SpecialItemMat, UTextBlock* CounterText);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMovableItemSlotMovementLogic(UUIPhase2EquipTab* ControllingBp, int32 IndexPosition, bool DisableIntroLogic);
    
    UFUNCTION(BlueprintCallable)
    void UpdateItemSlot(bool bForceUpdate, bool bExpandOnChanges);
    
    UFUNCTION(BlueprintCallable)
    void TriggerAll(UInventory* PlayerInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldHideIconChange() const;
    
    UFUNCTION(BlueprintCallable)
    void SetTopType(bool Top);
    
    UFUNCTION(BlueprintCallable)
    void SetTableRefrence(UItemTable* Table);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotIndex(int32 IndexNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGridSlotTabOwner(UUIPhase2MenuTab* NewOwner);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDefaultWidgetQuestStyle();
    
    UFUNCTION(BlueprintCallable)
    void SetButtonStyle();
    
    UFUNCTION(BlueprintCallable)
    void SetAsPlacementOption(bool HasValidStatus, UButton* ButtonUserWidget);
    
    UFUNCTION(BlueprintCallable)
    void SendItemInfoOnSelectionPhase2(bool& bHasFocus);
    
    UFUNCTION(BlueprintCallable)
    void SendItemInfoOnSelection(bool& bHasFocus);
    
    UFUNCTION(BlueprintCallable)
    void ProcessLastIconFadeOut(float DeltaTime, UCurveFloat* FadeCurve, float LastItemEmptyAlphaMod, UImage* LastIcon, UScaleBox* LastIconScaleBox);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NewStatusChanged();
    
    UFUNCTION(BlueprintCallable)
    void MakeStub();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetPanelImages(UImage*& CurrentIcon, UImage*& LastIcon, UImage*& Stub);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPaperSprite* GetOpenHandIcon() const;
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetFirstChildOfClass(UCanvasPanel* ParentPanel, TSubclassOf<UWidget> ChildClass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTexture2D* GetDefaultIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPaperSprite* GetClosedHandIcon() const;
    
    UFUNCTION(BlueprintCallable)
    void FocusRecievedNew();
    
    UFUNCTION(BlueprintCallable)
    void ConfigureWidgetsButton(UTextBlock* CountText, UImage* Icon, UTextBlock* WeightText, UButton* Button);
    
    UFUNCTION(BlueprintCallable)
    void ConfigureButtonStyle(UCanvasPanel* ContentWidget);
    
    UFUNCTION(BlueprintCallable)
    void AddToTables(TArray<UItemTable*> AddToTable, UItemBase* ItemToAdd, UItemTable* DefaultTable, bool& Added, bool& Stacked, bool& StackUsedUp);
    
    UFUNCTION(BlueprintCallable)
    void ActionSlot(UInventory* _UseInventory, bool bActionSlot, FText& ActionMessage);
    
};

