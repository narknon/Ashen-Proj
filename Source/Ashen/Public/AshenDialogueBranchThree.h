#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AshenDialogueBranchThreeCallbackDelegate.h"
#include "EInputUIEventTypes.h"
#include "AshenDialogueBranchThree.generated.h"

class UDialogueComponent;
class UUIPhase2MenuTab;
class UAshenDialogueBranchThree;

UCLASS(Blueprintable)
class ASHEN_API UAshenDialogueBranchThree : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshenDialogueBranchThreeCallback Option1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshenDialogueBranchThreeCallback Option2;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshenDialogueBranchThreeCallback Option3;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAshenDialogueBranchThreeCallback Cancel;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UDialogueComponent> DialogueComponent;
    
public:
    UAshenDialogueBranchThree();
    UFUNCTION(BlueprintCallable)
    void UIButtonCallbackBranch(UUIPhase2MenuTab* Tab, EInputUIEventTypes Button);
    
    UFUNCTION(BlueprintCallable)
    static UAshenDialogueBranchThree* DisplayDialogueBranchMulti(UDialogueComponent* NewDialogueComponent, FText Text, FText NewOption1, FText NewOption2, FText NewOption3, bool bPlayAudioResponse, bool bPlayTalkingAnimation);
    
};

