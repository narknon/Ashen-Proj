#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AshenUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ENpcType.h"
#include "QuestPointArray.h"
#include "UObject/NoExportTypes.h"
#include "QuestZoneArray.h"
#include "TravelPointData.h"
#include "EUIMapIconTypes.h"
#include "UIMapAreasWidget.generated.h"

class UUIMapIcon;
class UUIMapTab;
class UUIMapManager;
class UCurveFloat;
class AAshenBaseGameState;
class UCanvasPanel;
class UMaterial;
class UImage;
class UZoneDynamicMaterialTypes;
class UAreaSDFImages;
class UTexture2D;
class UMaterialInstanceDynamic;
class UDataTable;
class UPaperSprite;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIMapAreasWidget : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RasterStyleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseInDungeonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsePlayerPositionLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerPositionLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUIMapTab* OwningMenuTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIMapManager* MapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameState* AshenBaseGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugQuestZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> DebugActiveZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> DebugFocusZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MapViewportParentSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WorldMapCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WorldMapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DefaultMapPixelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D QuestZoneSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SmallTexturesSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D StructTexturesSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MountainsTexturesSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WaterTexturesSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GroundTexturesSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusToMakeZoneAnIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BumpZoneRadii_ThisMinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUIMapIcon> UI_MapIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* IconCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Icon_ActiveZonesCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Icon_FocusedZonesCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Icon_PlayerCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Icon_RemotePlayerCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Icon_SaveStoneCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Icon_TravelStoneCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Icon_DungeonCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Icon_CaveCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Icon_CorpseCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* PositionCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* QuestZoneCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalIconAlphaMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuestZonesChangeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* QuestZoneChangeRadialMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcType LastFocusedQuestZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcType LastActiveQuestZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestZonesMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestZonesPointsMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuestZoneBoarderSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* QuestZoneMaterial_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* QuestZoneMaterial_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* QuestZoneMaterial_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* QuestZoneMaterial_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* QuestZoneMaterial_5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* QuestZoneMaterial_6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* QuestZoneMaterial_7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UImage*> QuestZones_Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UImage*> QuestZones_Focused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UZoneDynamicMaterialTypes*> ActiveZoneDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UZoneDynamicMaterialTypes*> FocusedZoneDynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ActiveQuestBoarderColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ActiveQuestGlowColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FocusQuestBoarderColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FocusQuestGlowColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AreaNameColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SubAreaNameColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAreaSDFImages*> Areas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* GroundTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SmallTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* StructTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* WaterTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MountainsTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SmallColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor StructColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GroundColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MountainsColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor WaterColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PathColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BoarderColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ActiveBoarderColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UnExploredColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* GroundMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* SmallMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* StructMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* WaterMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* MountainsMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* PathMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* BoarderMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* ActiveBoarderMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* UnExploredMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* UnExploredMaterial_Dynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* UnexploredImage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestPointArray> ActiveQuestZonesAsMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestPointArray> InactiveQuestZonesAsMarkers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestZoneArray ActiveZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestZoneArray PendingActiveZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasPendingActives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasMaxRadActives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusModActives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestZoneArray FocusedZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuestZoneArray PendingFocusedZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasPendingFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasMaxRadFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusModFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENpcType, FQuestZoneArray> InactiveZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENpcType, FQuestZoneArray> PendingInActiveZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENpcType, FQuestZoneArray> AllZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENpcType, FQuestZoneArray> PendingAllZones;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveMapCameraLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapZoomLerpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CamMovementCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapZoomAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapZoomAmount_Enlarged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CameraBoundSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CameraBoundSizeZoomed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D IdealMapCameraPostion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CurrentMapCameraPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D StartMapCameraPostion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MapBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveMapCameraLerpTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LerpingMapCamera;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdealMapZoomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMapZoomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartMapZoomValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapZoomLerpTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LerpingMapZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomForSubAreaTitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapEnlarged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaTextalphaSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaTextalpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastAreaTextalpha;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JuiceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* JuiceImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* JuiceBlackBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UImage* JuiceGreyOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* JuiceMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* JuiceMaterialInstance;
    
    UUIMapAreasWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateTextAlphas(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateQuestZones(ENpcType ActiveNPC, ENpcType FocusedNPC);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMapCamera(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateJuice(bool UpIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateInactiveZonesMarkers();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateInActiveQuestZones(TMap<ENpcType, FQuestZoneArray> NewInactiveZones);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateFocusedZonesMaterials(bool BrushChangeover);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateFocusedQuestZones(ENpcType FocusedNPC, FQuestZoneArray Array);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateActiveZonesMaterials(bool BrushChangeover);
    
    UFUNCTION(BlueprintCallable)
    void UpdateActiveZonesMarkers();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateActiveQuestZones(ENpcType ActiveNPC, FQuestZoneArray Array);
    
private:
    UFUNCTION(BlueprintCallable)
    void TickQuestZones(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FTravelPointData> SortPointsAroundMapCenterRadially(TArray<FTravelPointData> Points, FVector2D DeltaOffset);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldUsePlayerPositionLock(FVector& LocationLock);
    
    UFUNCTION(BlueprintCallable)
    bool ShouldUseDungeonStyleMap();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetNextZoneFocused(FQuestZoneArray Points);
    
    UFUNCTION(BlueprintCallable)
    void SetNextZoneActives(FQuestZoneArray Points);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMapZoomed(bool Zoomed);
    
    UFUNCTION(BlueprintCallable)
    void SetMapZoom(float Zoom, bool Animate);
    
    UFUNCTION(BlueprintCallable)
    void SetGlowOnCurrentArea(bool FocusCameraToo);
    
    UFUNCTION(BlueprintCallable)
    void SetAreaTextNewStatusAndVisibilities();
    
    UFUNCTION(BlueprintCallable)
    void SetAreaNumAsActive(int32 AreaNumber);
    
    UFUNCTION(BlueprintCallable)
    FName SetAreaAsActive(FName Area);
    
    UFUNCTION(BlueprintCallable)
    void ReInitualizeMap();
    
    UFUNCTION(BlueprintCallable)
    void PlaceIcons_TravelStones();
    
    UFUNCTION(BlueprintCallable)
    void PlaceIcons_SaveStones();
    
    UFUNCTION(BlueprintCallable)
    void PlaceIcons_Players();
    
    UFUNCTION(BlueprintCallable)
    void PlaceIcons_Markers();
    
    UFUNCTION(BlueprintCallable)
    void PlaceIcons_InactiveQuestZones();
    
    UFUNCTION(BlueprintCallable)
    void PlaceIcons_ActiveQuestZones();
    
    UFUNCTION(BlueprintCallable)
    void PlaceIcons();
    
    UFUNCTION(BlueprintCallable)
    void PlaceIcon_CorpseLoot();
    
    UFUNCTION(BlueprintCallable)
    void MakeQuestZoneImages();
    
    UFUNCTION(BlueprintCallable)
    void MakeAreaImages();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetMapPosFromWorld(FVector WorldLoc);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UDataTable*> GetAllAreaDataTables();
    
    UFUNCTION(BlueprintCallable)
    void DebugQuestZonesFunction();
    
    UFUNCTION(BlueprintCallable)
    void CreateAllOptionalAreas(UCanvasPanel* ParentCanvas, FVector2D Position, FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    void ClearAreaTextNewStatus(bool MainTitles);
    
    UFUNCTION(BlueprintCallable)
    void CleanupQuestZoneImages();
    
    UFUNCTION(BlueprintCallable)
    void CleanupAreaImages();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeOverFocusedZones();
    
    UFUNCTION(BlueprintCallable)
    void ChangeOverActiveZones();
    
public:
    UFUNCTION(BlueprintCallable)
    void CenterMapOnWorldLocation(FVector Position, bool Animate);
    
    UFUNCTION(BlueprintCallable)
    void CenterMapOnArea(FName AreaRowName, bool Animate);
    
    UFUNCTION(BlueprintCallable)
    UUIMapIcon* AddMapIcon(UCanvasPanel* Canvas, EUIMapIconTypes TypeOfIcon, ENpcType NpcType, FTravelPointData TravelPointData, bool ActiveQuest, FVector InWorldPosition, UPaperSprite* TextureOveride, float OverrideSize);
    
    UFUNCTION(BlueprintCallable)
    void AddDeltaToCameraZoom(float AddCameraDelta);
    
    UFUNCTION(BlueprintCallable)
    void AddDeltaToCameraPosition(FVector2D AddCameraDelta);
    
};

