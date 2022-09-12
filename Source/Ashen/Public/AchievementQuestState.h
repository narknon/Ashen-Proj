#pragma once
#include "CoreMinimal.h"
#include "QuestState.h"
#include "AchievementQuestState.generated.h"

UCLASS(Abstract, Blueprintable)
class ASHEN_API UAchievementQuestState : public UQuestState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementName;
    
public:
    UAchievementQuestState();
};

