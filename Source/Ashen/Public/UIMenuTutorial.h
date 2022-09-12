#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EInputEventNames.h"
#include "AshenUserWidget.h"
#include "EUITutorialName.h"
#include "EItemType.h"
#include "EUITutorialPosition.h"
#include "UIMenuTutorial.generated.h"

class UItemBase;
class UUserWidget;
class UUIMenuTutorial;
class UUIPhase2MenuTab;
class UUIItemGridSlot;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIMenuTutorial : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUITutorialName Tutorial_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemBase> Tutorial_Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemType Tutorial_ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TutorialText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EInputEventNames> ButtonsToHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUITutorialPosition TutorialPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIMenuTutorial> TutorialWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TutorialDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TutorialDisapearsOnPress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* TutorialFocusWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIPhase2MenuTab* OwningTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UUIItemGridSlot*> ReliventGridSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlphaValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemovePending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIItemGridSlot* FocusGridSlot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastItemIndex;
    
public:
    UUIMenuTutorial();
    UFUNCTION(BlueprintCallable)
    void UpdateTutorialGridSlots(bool ClearAll);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFunction(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupTutorial();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTutorial();
    
};

