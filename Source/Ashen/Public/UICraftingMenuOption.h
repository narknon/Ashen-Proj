#pragma once
#include "CoreMinimal.h"
#include "UIDynamicMenuOption.h"
#include "ENpcType.h"
#include "UICraftingMenuOption.generated.h"

class UHorizontalBox;
class UImage;
class UUIItemGridSlot;
class UItemBase;
class UUITalisman;
class UUserWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUICraftingMenuOption : public UUIDynamicMenuOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIItemGridSlot* ItemSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUITalisman* TalismanSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TalismanType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBase* ItemRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* GlowImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* HighlightRef;
    
    UUICraftingMenuOption();
    UFUNCTION(BlueprintCallable)
    void UnmarkItemAsNew(ENpcType CraftingNpc);
    
    UFUNCTION(BlueprintCallable)
    void SetupComponents_CraftingUI(UHorizontalBox* _SelectCanvas, TArray<UTextBlock*> _TextRenderer, UUserWidget* Highlight, UImage* _PressHighlight, UImage* _Glow, UUIItemGridSlot* _ItemSlot, UUITalisman* NewTalismanSlot, UItemBase* _ItemRef);
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool Selected);
    
    UFUNCTION(BlueprintCallable)
    void SetPressed(bool Pressed);
    
    UFUNCTION(BlueprintCallable)
    void SetGlow(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveGlowMaterial(bool ActiveType);
    
};

