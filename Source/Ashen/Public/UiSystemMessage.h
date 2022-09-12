#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "UiSystemMessage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUiSystemMessage : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> MessageQueue;
    
    UUiSystemMessage();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PushToHud();
    
    UFUNCTION(BlueprintCallable)
    void PushSystemMessage(FText MessageString);
    
    UFUNCTION(BlueprintCallable)
    void ClearMessageQueue();
    
    UFUNCTION(BlueprintCallable)
    void AddToMessageQueue(FText MessageString);
    
};

