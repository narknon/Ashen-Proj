#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "QuestBlueprintLibrary.generated.h"

class UQuestState;

UCLASS(Blueprintable)
class ASHEN_API UQuestBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQuestBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void ProgressQuest(UQuestState* QuestState, int32 BranchIndex);
    
};

