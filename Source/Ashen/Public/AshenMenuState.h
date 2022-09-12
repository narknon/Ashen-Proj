#pragma once
#include "CoreMinimal.h"
#include "AshenBaseState.h"
#include "QuestStateTag.h"
#include "AshenMenuState.generated.h"

class UAshenStateSave;
class UQuestLine;

UCLASS(Blueprintable)
class ASHEN_API AAshenMenuState : public AAshenBaseState {
    GENERATED_BODY()
public:
    AAshenMenuState();
    UFUNCTION(BlueprintCallable)
    void StartGame(bool bNewGame);
    
    UFUNCTION(BlueprintCallable)
    bool QuerySaveDataForDlcUnlocked(UAshenStateSave* Save, UQuestLine* QuestLine, FQuestStateTag DlcUnlockedQuestStateTag);
    
};

