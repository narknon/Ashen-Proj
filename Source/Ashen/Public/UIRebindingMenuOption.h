#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InputKeyImage.h"
#include "UIDynamicMenuOption.h"
#include "EUIRebindingButtonTypes.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "UIRebindingMenuOption.generated.h"

class UHorizontalBox;
class UTextBlock;
class UUIDynamicMenuSelector;
class UUserWidget;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIRebindingMenuOption : public UUIDynamicMenuOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIRebindingButtonTypes KeyCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputKeyImage KeyBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> InputActionKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> AxisActionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIDynamicMenuSelector> RebindSelectorType;
    
    UUIRebindingMenuOption();
    UFUNCTION(BlueprintCallable)
    void SetupComponents(UHorizontalBox* _SelectCanvas, TArray<UTextBlock*> _TextRenderer, UUserWidget* _GlowComponent, UImage* _HoverHighlight, UImage* _PressHighlight);
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool Selected);
    
    UFUNCTION(BlueprintCallable)
    void SetPressed(bool Pressed);
    
    UFUNCTION(BlueprintCallable)
    void SetGlow(bool Visible);
    
};

