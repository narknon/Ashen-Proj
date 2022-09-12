#pragma once
#include "CoreMinimal.h"
#include "QuestStateTag.h"
#include "OutputBranch.h"
#include "UObject/Object.h"
#include "QuestNode.generated.h"

class UQuestState;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UQuestNode : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOutputBranch> Branches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestStateTag> StateTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestState* QuestState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* NodeInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NodeIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomName;
    
public:
    UQuestNode();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UQuestState* GetQuestState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCustomName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FOutputBranch> GetBranches() const;
    
};

