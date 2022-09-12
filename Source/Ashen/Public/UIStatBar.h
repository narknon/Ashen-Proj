#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "EItemQuality.h"
#include "UIStatBarData.h"
#include "UObject/NoExportTypes.h"
#include "EUIStatBarType.h"
#include "UIStatBuffData.h"
#include "UIStatBar.generated.h"

class UCanvasPanel;
class UTextBlock;
class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIStatBar : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UUIStatBar();
    UFUNCTION(BlueprintCallable)
    void SetupStatsBarInternal(FUIStatBarData BarData, bool GreyedOut, bool UpgradedColour, bool ShowMoficationValues, bool SmallBarType, bool LargeBarType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupStatBar(FUIStatBarData BarData, bool GreyedOut, bool UpgradedColour, bool ShowMoficationValues);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStatsIcon(FLinearColor Colour, EUIStatBarType StatBarType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetStatTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetStatText(EUIStatBarType StatBarType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetStatsTitleSmall();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetStatsTitleLarge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FLinearColor GetNormalStatColour(EItemQuality Tier, bool ForNextUpgrade) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FLinearColor GetModifierValueTextColour(int32 State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetModifierText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCanvasPanel* GetModifierSpace();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FLinearColor GetGreyedOutColour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UHorizontalBox* GetEffectNumberSpace();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateAndSetupIconAndNumberWidget(bool ShowModifier, FUIStatBuffData StatData, FLinearColor TierColour, bool IsForUpgradedItem, EUIStatBarType BarType);
    
};

