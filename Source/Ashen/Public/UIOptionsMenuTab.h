#pragma once
#include "CoreMinimal.h"
#include "UIPhase2MenuTab.h"
#include "ECompassDirs.h"
#include "UIOptionsMenuTab.generated.h"

class UWidget;
class UButton;
class UScaleBox;
class UUIPhase2Menu;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIOptionsMenuTab : public UUIPhase2MenuTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TabIteration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FocusedButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OldFocusedButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UButton*> Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> OtherFocusableElliments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBox4Tab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompassDirs SetupFadeInDirectionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECompassDirs LastSetupFadeDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoScrollAfterN_Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PerButtonDisplacment;
    
    UUIOptionsMenuTab();
    UFUNCTION(BlueprintCallable)
    void UpdateFunc(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StandardGiveFocus_Internal();
    
    UFUNCTION(BlueprintCallable)
    void SetupFunc(UUIPhase2Menu* OwnerRef, bool StationaryWidget, bool DissableTempFading);
    
    UFUNCTION(BlueprintCallable)
    void SetScaleOfTab(UButton* ButtonInTab);
    
    UFUNCTION(BlueprintCallable)
    void MouseHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGamma(float& Gamma);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutTabTemp();
    
    UFUNCTION(BlueprintCallable)
    void FadeOutTab2Close(ECompassDirs Dir);
    
    UFUNCTION(BlueprintCallable)
    void FadeInTabFromTemp(bool ForceRefade, bool ForceSlideIsLeft);
    
    UFUNCTION(BlueprintCallable)
    void FadeInTabFromClose(ECompassDirs Dir);
    
};

