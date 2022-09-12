#pragma once
#include "CoreMinimal.h"
#include "AshenDialogueCallbackDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EInputUIEventTypes.h"
#include "EDialogueTone.h"
#include "AshenDialogueAction.generated.h"

class UAshenDialogueAction;
class UDialogueComponent;
class UUIPhase2MenuTab;

UCLASS(Blueprintable)
class ASHEN_API UAshenDialogueAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshenDialogueCallback Complete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshenDialogueCallback BackedOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDialogueComponent* DialogueComponent;
    
public:
    UAshenDialogueAction();
private:
    UFUNCTION(BlueprintCallable)
    void UIButtonCallback(UUIPhase2MenuTab* Tab, EInputUIEventTypes Button);
    
public:
    UFUNCTION(BlueprintCallable)
    static UAshenDialogueAction* DisplayDialogue(UDialogueComponent* NewDialogueComponent, FText Text, EDialogueTone Tone, bool bPlayTalkingAnimation);
    
};

