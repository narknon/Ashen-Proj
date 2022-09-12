#pragma once
#include "CoreMinimal.h"
#include "EInputEventNames.h"
#include "AshenUserWidget.h"
#include "UIContextButton.generated.h"

class UUIPhase2MenuTab;
class AAshenBasePlayerController;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIContextButton : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIPhase2MenuTab* OwningMenuTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FadeOutWhenParentTabNotInFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBasePlayerController* AshenPlayerController;
    
    UUIContextButton();
    UFUNCTION(BlueprintCallable)
    bool GetInputState(EInputEventNames InputEventName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesOwningMenuTabHaveFocus() const;
    
};

