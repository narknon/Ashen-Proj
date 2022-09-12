#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EDialogueOptions.h"
#include "DialogueTree.generated.h"

class UUiDialogue;

UCLASS(Blueprintable)
class ASHEN_API ADialogueTree : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUiDialogue* DialogueUiInstance;
    
    ADialogueTree();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RunDialogueTree();
    
    UFUNCTION(BlueprintCallable)
    void ProgressDialogueTree(EDialogueOptions SelectedOption);
    
    UFUNCTION(BlueprintCallable)
    void NewSlide(FText Text, bool bIsYesNo, EDialogueOptions& Choices);
    
    UFUNCTION(BlueprintCallable)
    void EndTree();
    
    UFUNCTION(BlueprintCallable)
    void ConfigureTree(UUiDialogue* SetDialogueUiInstance);
    
};

