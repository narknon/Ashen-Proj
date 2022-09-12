#pragma once
#include "CoreMinimal.h"
#include "UIDynamicMenuOption.h"
#include "UObject/NoExportTypes.h"
#include "UICharacterCreationOption.generated.h"

class UHorizontalBox;
class UImage;
class UTextBlock;
class UPaperSprite;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUICharacterCreationOption : public UUIDynamicMenuOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* OptionImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* OptionImageBoarder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* UnderscoreImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* BoarderImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseUnderscore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseBoarder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SelectedOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor IconColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* IconSprite;
    
    UUICharacterCreationOption();
    UFUNCTION(BlueprintCallable)
    void SetupComponents_CharCreation(UHorizontalBox* _SelectCanvas, TArray<UTextBlock*> _TextRenderer, UImage* _HoverHighlight, UImage* _BoarderImage, UUserWidget* _GlowComponent, UImage* _PressHighlight, UImage* _UnderscoreImage, UImage* _OptionImage, UImage* _OptionImageBoarder);
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool Selected);
    
    UFUNCTION(BlueprintCallable)
    void SetPressed(bool Pressed);
    
    UFUNCTION(BlueprintCallable)
    void SetIcon(UPaperSprite* Image);
    
    UFUNCTION(BlueprintCallable)
    void SetGlow(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SelectThisOption(bool Select);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIconAnimation();
    
};

