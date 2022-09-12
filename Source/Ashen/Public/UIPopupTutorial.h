#pragma once
#include "CoreMinimal.h"
#include "EInputEventNames.h"
#include "OverlayTutorialInput.h"
#include "AshenUserWidget.h"
#include "UIPopupTutorial.generated.h"

class UUIPhase2OverlayMenu;
class UUIPlayerHud;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIPopupTutorial : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WidgetOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlayTutorialInput> Queue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInputEventNames> ReliventButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIPhase2OverlayMenu* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextRef2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIPlayerHud* HUDRef;
    
    UUIPopupTutorial();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UTextBlock* Text, UTextBlock* Text2);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupReliventButton();
    
    UFUNCTION(BlueprintCallable)
    void SetupNextAnimation();
    
    UFUNCTION(BlueprintCallable)
    void QueueNew(FOverlayTutorialInput Type, UUIPlayerHud* PlayerHudRef, UUIPhase2OverlayMenu* NewOwner);
    
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
    bool IsStillValid();
    
    UFUNCTION(BlueprintCallable)
    void BeginCloseAnims();
    
};

