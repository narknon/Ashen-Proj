#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIDynamicMenuTab.h"
#include "Layout/Geometry.h"
#include "ENpcType.h"
#include "UIQuestStateArray.h"
#include "ETravelPointName.h"
#include "UIMapTab.generated.h"

class UVerticalBox;
class UUIMapMenuOption;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIMapTab : public UUIDynamicMenuTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENpcType, FUIQuestStateArray> UIQuestProgress;
    
    UUIMapTab();
    UFUNCTION(BlueprintCallable)
    void ReturnMouseCursorToCapturedPosition();
    
    UFUNCTION(BlueprintCallable)
    void OnMousePressCaptureReleased();
    
    UFUNCTION(BlueprintCallable)
    void OnMousePressCaptured();
    
    UFUNCTION(BlueprintCallable)
    bool IsMouseWithinMapViewportWindow(FGeometry MapViewportGeometry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMouseCapturedInViewportWindow() const;
    
    UFUNCTION(BlueprintCallable)
    void AddTravelPointsToList(TArray<ETravelPointName> SortOrder, TSubclassOf<UUIMapMenuOption> WidgetClass, UVerticalBox* ListParentBox);
    
};

