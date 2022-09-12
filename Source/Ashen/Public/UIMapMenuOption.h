#pragma once
#include "CoreMinimal.h"
#include "UIDynamicMenuOption.h"
#include "ENpcType.h"
#include "TravelPointData.h"
#include "UObject/NoExportTypes.h"
#include "UIMapMenuOption.generated.h"

class UUserWidget;
class UUIMapIcon;
class UHorizontalBox;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIMapMenuOption : public UUIDynamicMenuOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcType NPCButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTravelPointData TravelPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIMapIcon* AttachedMapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUserWidget* NewImageRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* ActiveQuestImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* QuestImageGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SelectedNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ActiveQuestIconColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InActiveQuestIconColour;
    
    UUIMapMenuOption();
    UFUNCTION(BlueprintCallable)
    void SetupComponents_MapUI(UHorizontalBox* _SelectCanvas, TArray<UTextBlock*> _TextRenderer, UImage* _HoverHighlight, UImage* _HoverHighlight2, UUserWidget* _GlowComponent, UImage* _PressHighlight, UUserWidget* NewImage, UImage* QuestImage, UImage* NewQuestImageGlow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTravelPoint(FTravelPointData _TravelPointData);
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool Selected);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestIcon(bool Visible, bool ActiveColours);
    
    UFUNCTION(BlueprintCallable)
    void SetPressed(bool Pressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNPC(ENpcType NPCEnum);
    
    UFUNCTION(BlueprintCallable)
    void SetNew();
    
    UFUNCTION(BlueprintCallable)
    void SetGlow(bool Visible);
    
    UFUNCTION(BlueprintCallable)
    void SelectThisTravelPoint(bool Select);
    
    UFUNCTION(BlueprintCallable)
    void SelectThisNPC(bool Select);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayQuestIconAnimation();
    
    UFUNCTION(BlueprintCallable)
    void ClearNew();
    
};

