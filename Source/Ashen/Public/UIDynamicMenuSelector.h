#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "EDynamicMenuOptionType.h"
#include "UIDynamicMenuSelector.generated.h"

class UUIDynamicMenuOption;
class UAshenGameInstance;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIDynamicMenuSelector : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIDynamicMenuOption* OwningOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDynamicMenuOptionType SelectorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> SelectorOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastSetValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UUIDynamicMenuSelector();
    UFUNCTION(BlueprintCallable)
    void UIReturnNewValue(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TextSelectorPress(bool Up, UUserWidget* Selector);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TextSelectorHover(bool Hovered, UUserWidget* Selector);
    
    UFUNCTION(BlueprintCallable)
    void SetValue(float Number, bool AnimateUI, bool SetupCall);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupSelector(float Number);
    
    UFUNCTION(BlueprintCallable)
    void SetupFromOption(UUIDynamicMenuOption* Owner, UAshenGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUIVisualValue(float Number, bool Animate, bool SameValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetUIHighlighted(bool Hovered);
    
    UFUNCTION(BlueprintCallable)
    void SaveValue();
    
    UFUNCTION(BlueprintCallable)
    float MapSelectorValue(float Number, bool ToSave);
    
    UFUNCTION(BlueprintCallable)
    bool FlipValue();
    
};

