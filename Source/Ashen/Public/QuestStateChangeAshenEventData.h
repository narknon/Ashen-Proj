#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AshenEventData.h"
#include "QuestStateTag.h"
#include "QuestStateChangeAshenEventData.generated.h"

class UQuestLine;
class UQuestManager;
class UQuestState;

UCLASS(Blueprintable)
class ASHEN_API UQuestStateChangeAshenEventData : public UAshenEventData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLine* QuestLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UQuestState*> NewStates;
    
public:
    UQuestStateChangeAshenEventData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenChangedToTag(UQuestLine* InQestLine, FQuestStateTag QuestStateTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenChangedTo(UQuestLine* InQuestLine, TSubclassOf<UQuestState> InQuestState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestManager* GetQuestManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestLine* GetQuestLine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UQuestState*> GetNewStates() const;
    
};

