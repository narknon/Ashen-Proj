#pragma once
#include "CoreMinimal.h"
#include "UIDynamicMenuTab.h"
#include "GameFramework/PlayerInput.h"
#include "UIInputRebindingMenu.generated.h"

class UUIRebindingMenuOption;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIInputRebindingMenu : public UUIDynamicMenuTab {
    GENERATED_BODY()
public:
    UUIInputRebindingMenu();
    UFUNCTION(BlueprintCallable)
    void ReplaceKeybindingInArray(FInputActionKeyMapping NewKeyMap, int32 SelectedButtonIndex, UUIRebindingMenuOption* KeybindButton);
    
    UFUNCTION(BlueprintCallable)
    void FillDynamicButtonKeyBindings(UUIRebindingMenuOption* KeybindButton);
    
    UFUNCTION(BlueprintCallable)
    void BindButtonKeyAction(UUIRebindingMenuOption* KeybindButton);
    
};

