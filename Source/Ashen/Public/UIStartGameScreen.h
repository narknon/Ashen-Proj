#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "UIStartGameScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIStartGameScreen : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UUIStartGameScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSignInChangeError();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSignInChangeErrorVisible() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSignInChangeError();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutAndRemove();
    
};

