#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "OverlayTownPersonInput.h"
#include "UIPopupTownsperson.generated.h"

class UUIPhase2OverlayMenu;
class UUIPlayerHud;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIPopupTownsperson : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WidgetOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOverlayTownPersonInput> Queue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIPhase2OverlayMenu* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTextBlock* TextRef2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIPlayerHud* HUDRef;
    
    UUIPopupTownsperson();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UTextBlock* Text, UTextBlock* Text2);
    
    UFUNCTION(BlueprintCallable)
    void SetupNextAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTypeOfTownperson(bool SecondaryAdd);
    
    UFUNCTION(BlueprintCallable)
    void QueueNew(FOverlayTownPersonInput Type, UUIPlayerHud* PlayerHudRef, UUIPhase2OverlayMenu* NewOwner);
    
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
    
};

