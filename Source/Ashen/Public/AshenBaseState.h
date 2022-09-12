#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "EPlayState.h"
#include "AshenBaseState.generated.h"

class UAshenUserWidget;
class UWidget;
class UAshenGameInstance;

UCLASS(Blueprintable)
class ASHEN_API AAshenBaseState : public AGameState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayStateChange, EPlayState, PreviousPlayState, EPlayState, CurrentPlayState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayStateChange OnPlayStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayState PlayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenGameInstance* AshenGameInstance;
    
    AAshenBaseState();
    UFUNCTION(BlueprintCallable)
    void ForceWidgetSelection(UWidget* WidgetToSelect);
    
    UFUNCTION(BlueprintCallable)
    void ChangePlayState(EPlayState NewPlayState, UAshenUserWidget* FocusOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayNightstormDLC() const;
    
};

