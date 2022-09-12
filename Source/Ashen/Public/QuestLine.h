#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ENpcType.h"
#include "QuestLine.generated.h"

class UQuestNode;

UCLASS(Blueprintable, MinimalAPI)
class UQuestLine : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcType QuestLineOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplitsMatchmakingPools;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UQuestNode*> RootNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestLineName;
    
public:
    UQuestLine();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UQuestNode*> GetRootQuestNodes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetQuestLineName();
    
};

