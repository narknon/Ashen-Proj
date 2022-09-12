#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AshenDialogueBranchCallbackDelegate.h"
#include "EInputUIEventTypes.h"
#include "AshenDialogueBranch.generated.h"

class UDialogueComponent;
class UUIPhase2MenuTab;
class UAshenDialogueBranch;

UCLASS(Blueprintable)
class ASHEN_API UAshenDialogueBranch : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshenDialogueBranchCallback Yes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshenDialogueBranchCallback No;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshenDialogueBranchCallback Cancel;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UDialogueComponent> DialogueComponent;
    
public:
    UAshenDialogueBranch();
    UFUNCTION(BlueprintCallable)
    void UIButtonCallbackBranch(UUIPhase2MenuTab* Tab, EInputUIEventTypes Button);
    
    UFUNCTION(BlueprintCallable)
    static UAshenDialogueBranch* DisplayDialogueBranch(UDialogueComponent* NewDialogueComponent, FText Text, FText Positive, FText Negative, bool bPlayAudioResponse, bool bPlayTalkingAnimation);
    
};

