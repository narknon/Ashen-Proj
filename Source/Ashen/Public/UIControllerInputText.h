#pragma once
#include "CoreMinimal.h"
#include "AshenUserWidget.h"
#include "UIControllerInputText.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUIControllerInputText : public UAshenUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> InputStrings;
    
    UUIControllerInputText();
    UFUNCTION(BlueprintCallable)
    void SetDisplayString(UTextBlock* TextWidget);
    
};

