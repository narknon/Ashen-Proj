#pragma once
#include "CoreMinimal.h"
#include "QuestStateTag.h"
#include "Components/StaticMeshComponent.h"
#include "EIndicatorType.h"
#include "EIndicatorIconType.h"
#include "IndicatorComponent.generated.h"

class UMaterialInstanceDynamic;
class UAshenStateSave;
class UCurveFloat;
class AAshenBaseGameState;
class UAshenGameInstance;
class UQuestLine;
class AHumanoid;
class UMaterialInstance;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASHEN_API UIndicatorComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameState* AshenGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenStateSave* StateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAshenGameInstance* AshenGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLine* QuestRelevantObjectQuestLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestStateTag> QuestRelevantObjectTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIndicatorType IndicatorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIndicatorIconType CurrentIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* IndicatorMaterial_Loot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* IndicatorMaterial_QuestRelevant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* IndicatorMaterial_QuestGive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* IndicatorMaterial_QuestRecap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* IndicatorMaterial_Downed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* IndicatorMaterial_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FadeCurveFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FadeMaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceQuestRelivent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PermHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UIEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool QuestUIEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHumanoid* HumanoidOwner;
    
public:
    UIndicatorComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateIcon(bool ClearCurrentType);
    
    UFUNCTION(BlueprintCallable)
    void SetIconType(EIndicatorIconType Type);
    
    UFUNCTION(BlueprintCallable)
    void PlayOpacityCurveLerp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFXForTypeChange(EIndicatorIconType Type);
    
    UFUNCTION(BlueprintCallable)
    void PermenantlyHide(bool PermHide);
    
    UFUNCTION(BlueprintCallable)
    EIndicatorIconType GetQuestRelevantObjectIcon();
    
    UFUNCTION(BlueprintCallable)
    EIndicatorIconType GetQuestRelevantCreatureIcon();
    
    UFUNCTION(BlueprintCallable)
    EIndicatorIconType GetNPCIcon();
    
    UFUNCTION(BlueprintCallable)
    EIndicatorIconType GetLootIcon(bool DisplayEmptyAsIcon);
    
    UFUNCTION(BlueprintCallable)
    EIndicatorIconType GetHeroIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMaterialInstanceDynamic* GetDynamicFadeMaterial();
    
    UFUNCTION(BlueprintCallable)
    EIndicatorIconType GetCraftingTableIcon();
    
};

