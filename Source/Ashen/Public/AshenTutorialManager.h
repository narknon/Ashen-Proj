#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "ETrackedPlayerEvent.h"
#include "ETrackedPlayerState.h"
#include "CombatTutorialStageEntry.h"
#include "OverlayTutorialInput.h"
#include "AshenTutorialManager.generated.h"

class AAshenBaseGameState;
class UTutorialChecker;
class UAshenEventData;
class AHero;

UCLASS(Blueprintable)
class ASHEN_API UAshenTutorialManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TutorialsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceValidTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrackedPlayerState CombatTutorialsStateRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETrackedPlayerEvent, FName> CombatInstanceQueries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETrackedPlayerEvent, int32> CombatInstanceCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETrackedPlayerEvent, bool> CombatInstanceDisqualifieds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CombatStageQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCombatTutorialStageEntry> CombatStages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTutorialChecker>> DefualtCombatTutorialChecks;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAshenBaseGameState* GameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHero* LocalHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTutorialChecker> TutorialsAllowedCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTutorialChecker* TutorialsAllowedController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTutorialChecker>> DefualtTutorialChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTutorialChecker>> DefualtEquipmentTutorialChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTutorialChecker>> DefualtCombatTutorialControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTutorialChecker*> CurrentTutorialChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTutorialChecker*> CurrentlyValidTutorialChecks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrackedPlayerEvent HighestPriorityCombatTutorialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlayTutorialInput AlertPartnerPromptInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertPartnerPromptDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlayTutorialInput ShareQuestPromptInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShareQuestPromptDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShareQuestPromptLoopDelay;
    
public:
    UAshenTutorialManager();
    UFUNCTION(BlueprintCallable)
    bool ShouldDisplayTutorials();
    
    UFUNCTION(BlueprintCallable)
    void SetHighestPriorityCombatTutorialType(ETrackedPlayerEvent EventName);
    
    UFUNCTION(BlueprintCallable)
    void ResetTutorials();
    
    UFUNCTION(BlueprintCallable)
    void OnUIOnOffSettingChange(UAshenEventData* Data);
    
    UFUNCTION(BlueprintCallable)
    bool IsTutorialOptionEnabled();
    
    UFUNCTION(BlueprintCallable)
    ETrackedPlayerEvent GetHighestPriorityCombatTutorialType();
    
    UFUNCTION(BlueprintCallable)
    UTutorialChecker* GetHigherPriorityTutorial(bool UIType);
    
    UFUNCTION(BlueprintCallable)
    TArray<UTutorialChecker*> GetCurrentTutorials();
    
    UFUNCTION(BlueprintCallable)
    void ClearOldTutorials();
    
    UFUNCTION(BlueprintCallable)
    void AddStandardTutorials();
    
    UFUNCTION(BlueprintCallable)
    void AddNewTutorial(TSubclassOf<UTutorialChecker> NewTutorial);
    
};

