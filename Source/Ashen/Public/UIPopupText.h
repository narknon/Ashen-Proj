#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "OverlayTextInput.h"
#include "UIPopupText.generated.h"

class UUIPhase2OverlayMenu;
class UUIPlayerHud;
class UTextBlock;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIPopupText : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveFromParentOnAnimFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WidgetOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlayTextInput> Queue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* StandardTextRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* AltTextRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* StandardStyleRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* AltStyleRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIPlayerHud* HUDRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIPhase2OverlayMenu* Owner;
    
    UUIPopupText();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UTextBlock* StandardText, UTextBlock* AltText, UUserWidget* StandardStyle, UUserWidget* AltStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetupNextAnimation();
    
    UFUNCTION(BlueprintCallable)
    void QueueNew(FOverlayTextInput Type, UUIPlayerHud* PlayerHudRef, UUIPhase2OverlayMenu* NewOwner);
    
    UFUNCTION(BlueprintCallable)
    void PlayNext();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCloseAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationAndSounds(float DisplayTime);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationsFinished();
    
    UFUNCTION(BlueprintCallable)
    void MenuOpened();
    
    UFUNCTION(BlueprintCallable)
    void BeginCloseAnims();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AdjustSizeForAltText();
    
};

