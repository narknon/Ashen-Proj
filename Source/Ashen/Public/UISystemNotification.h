#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UISystemNotification.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASHEN_API UUISystemNotification : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifetimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFadingOut;
    
public:
    UUISystemNotification();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOut();
    
};

