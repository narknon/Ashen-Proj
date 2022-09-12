#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SubtitleWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API USubtitleWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USubtitleWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplaySubtitle(const FString& Subtitle);
    
};

