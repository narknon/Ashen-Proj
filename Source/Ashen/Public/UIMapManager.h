#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "MapTexture_Additional.h"
#include "TravelPointData.h"
#include "UIMapManager.generated.h"

class AAshenBaseGameState;
class UAreaChainData;
class UQuestLine;
class UUIMapAreasWidget;
class UDataTable;
class UQuestState;

UCLASS(Blueprintable)
class ASHEN_API UUIMapManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameState* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanApplyAdditionalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapTexture_Additional> MapTextureAdditions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAreaChainData*> AreaChains;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIMapAreasWidget* MapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> LoadedAreaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIMapAreasWidget> MapAreaWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIMapAreasWidget> TravelMapWidgetClass;
    
public:
    UUIMapManager();
    UFUNCTION(BlueprintCallable)
    bool TravelToPoint(FTravelPointData TravelData, UQuestLine* UnlockQuestLine, TSubclassOf<UQuestState> UnlockQuestState, bool TestAcceptable);
    
    UFUNCTION(BlueprintCallable)
    void SetMapWidget(UUIMapAreasWidget* MapWidgetRef);
    
    UFUNCTION(BlueprintCallable)
    UUIMapAreasWidget* GetMapWidget();
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, UAreaChainData*> GetAreaChains();
    
    UFUNCTION(BlueprintCallable)
    TArray<FTravelPointData> GetActiveSavePoints();
    
    UFUNCTION(BlueprintCallable)
    void FindParentChains();
    
    UFUNCTION(BlueprintCallable)
    void CleanupParentChains();
    
};

