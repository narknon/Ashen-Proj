#pragma once
#include "CoreMinimal.h"
#include "EInputUIEventTypes.h"
#include "UIOptionsMenuTab.h"
#include "Engine/EngineTypes.h"
#include "EInputPressType.h"
#include "UObject/NoExportTypes.h"
#include "UIDynamicMenuTab.generated.h"

class UVerticalBox;
class UUIDynamicMenuOption;
class AHero;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIDynamicMenuTab : public UUIOptionsMenuTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUIDynamicMenuOption*> DynamicButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DissableStandardInputHandling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DissableUpDownNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableRefocusUpdateWhileMouseLeftHeld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle IntecractionClearTimerHandle;
    
    UUIDynamicMenuTab();
    UFUNCTION(BlueprintCallable)
    void UpdateFunc(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void RemoveNonPlatformButtons(UVerticalBox* BoxRef);
    
    UFUNCTION(BlueprintCallable)
    void RecieveInteractionInputTab(const AHero* Hero, EInputUIEventTypes PressEvent, EInputPressType PressType);
    
    UFUNCTION(BlueprintCallable)
    void RecieveControlInputTab(const FVector2D& Input);
    
    UFUNCTION(BlueprintCallable)
    void GetButtons(UVerticalBox* BoxRef);
    
    UFUNCTION(BlueprintCallable)
    void DynamicMenuPressEvent(bool Pressed, bool FromMouse);
    
    UFUNCTION(BlueprintCallable)
    void ClearPressEvents();
    
    UFUNCTION(BlueprintCallable)
    UUIDynamicMenuOption* AnyButtonHasMouseOver();
    
};

